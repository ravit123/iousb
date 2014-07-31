/* Name: main.c
 * Project: custom-class, a basic USB example
 * Author: Christian Starkjohann
 * Creation Date: 2008-04-09
 * Tabsize: 4
 * Copyright: (c) 2008 by OBJECTIVE DEVELOPMENT Software GmbH
 * License: GNU GPL v2 (see License.txt), GNU GPL v3 or proprietary (CommercialLicense.txt)
 */

/*
This example should run on most AVRs with only little changes. No special
hardware resources except INT0 are used. You may have to change usbconfig.h for
different I/O pins for USB. Please note that USB D+ must be the INT0 pin, or
at least be connected to INT0 as well.
We assume that an LED is connected to port B bit 0. If you connect it to a
different port or bit, change the macros below:
*/
#define LED_PORT_DDR        DDRB
#define LED_PORT_OUTPUT     PORTB
#define LED_BIT             0
#define USB_DATA_LONGOUT 5


#define USB_LED_OFF 'a'
#define USB_LED_ON  'b'



#include <avr/io.h>
#include <avr/wdt.h>
#include <avr/interrupt.h>  /* for sei() */
#include <util/delay.h>     /* for _delay_ms() */

#include <avr/pgmspace.h>   /* required by usbdrv.h */
#include "usbdrv.h"
#include "oddebug.h"        /* This is also an example for using debug macros */
#include "requests.h"       /* The custom request numbers we use */

static uchar replyBuf[20]= "ahojkyasdsdf";

static uchar dataReceived = 0, dataLength = 0; // for USB_DATA_IN
static int dataSent;

/* ------------------------------------------------------------------------- */
/* ----------------------------- USB interface ----------------------------- */
/* ------------------------------------------------------------------------- */

usbMsgLen_t usbFunctionSetup(uchar data[8])
{
usbRequest_t    *rq = (void *)data;
static uchar    dataBuffer[8];  /* buffer must stay valid when usbFunctionSetup returns */
uchar sizeo;

  switch(rq->bRequest){
    case USB_LED_ON:
        LED_PORT_OUTPUT|=1;
        return 0; 
    break;
    case USB_LED_OFF:
        LED_PORT_OUTPUT&=~1;
        usbMsgPtr = replyBuf;
        return sizeof(replyBuf);
    break;


     case 4: // modify reply buffer
        replyBuf[7] = rq->wValue.bytes[0];
        replyBuf[8] = rq->wValue.bytes[1];
        replyBuf[9] = rq->wIndex.bytes[0];
        replyBuf[10] = rq->wIndex.bytes[1];
        usbMsgPtr=replyBuf;
        return sizeof(replyBuf);
      }
}
/*
USB_PUBLIC uchar usbFunctionWrite(uchar *data, uchar len) {
    uchar i;
                        
    for(i = 0; dataReceived < dataLength && i < len; i++, dataReceived++)
        replyBuf[dataReceived] = data[i];
                
    return (dataReceived == dataLength); // 1 if we received it all, 0 if not
}
*/
/*
USB_PUBLIC uchar usbFunctionRead(uchar *data, uchar len) {
    uchar i;

    for(i = 0; dataSent < 1024 && i < len; i++, dataSent++)
        data[i] = '0'+i;
    
    // terminate the string if it's the last byte sent    
    if(i && dataSent == 1024) 
        data[i-1] = 0; // NULL
                
    return i; // equals the amount of bytes written
}
*/
/* ------------------------------------------------------------------------- */

int __attribute__((noreturn)) main(void)
{
uchar   i;

    wdt_enable(WDTO_1S);
    /* Even if you don't use the watchdog, turn it off here. On newer devices,
     * the status of the watchdog (on/off, period) is PRESERVED OVER RESET!
     */
    /* RESET status: all port bits are inputs without pull-up.
     * That's the way we need D+ and D-. Therefore we don't need any
     * additional hardware initialization.
     */
    usbInit();
    usbDeviceDisconnect();  /* enforce re-enumeration, do this while interrupts are disabled! */
    i = 0;
    while(--i){             /* fake USB disconnect for > 250 ms */
        wdt_reset();
        _delay_ms(1);
    }
    usbDeviceConnect();
    LED_PORT_DDR |= _BV(LED_BIT);   /* make the LED bit an output */
    sei();
    for(;;){                /* main event loop */
        wdt_reset();
        usbPoll();
    }
}

/* ------------------------------------------------------------------------- */
