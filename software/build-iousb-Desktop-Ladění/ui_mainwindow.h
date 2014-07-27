/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *widget;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *ANOUT_check;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_13;
    QLineEdit *AN_out_0;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_14;
    QLineEdit *AN_out_1;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *DIG_check;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QPushButton *DIG_dir_0;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *DIG_value_0;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *DIG_dir_1;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *DIG_value_1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *DIG_dir_2;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *DIG_value_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *DIG_dir_3;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *DIG_value_3;
    QFrame *line;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *ANIN_check;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_9;
    QLCDNumber *AN_num_0;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_10;
    QLCDNumber *AN_num_1;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_11;
    QLCDNumber *AN_num_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_12;
    QLCDNumber *AN_num_3;
    QFrame *line_2;
    QWidget *tab_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(575, 425);
        MainWindow->setBaseSize(QSize(40, 23));
        MainWindow->setStyleSheet(QLatin1String(" QProgressBar {\n"
"     border: 2px solid gray;\n"
"     border-radius: 4px;\n"
" }\n"
"\n"
" QProgressBar::chunk {\n"
"     background-color: #05B8CC;\n"
"	border-radius: 4px solid;\n"
" }"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 571, 371));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        widget = new QWidget(tab);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(290, 10, 141, 91));
        verticalLayout_5 = new QVBoxLayout(widget);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        ANOUT_check = new QCheckBox(widget);
        ANOUT_check->setObjectName(QStringLiteral("ANOUT_check"));

        verticalLayout_5->addWidget(ANOUT_check);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_10->addWidget(label_9);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_13);

        AN_out_0 = new QLineEdit(widget);
        AN_out_0->setObjectName(QStringLiteral("AN_out_0"));
        AN_out_0->setEnabled(false);

        horizontalLayout_10->addWidget(AN_out_0);


        verticalLayout_5->addLayout(horizontalLayout_10);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_10 = new QLabel(widget);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_9->addWidget(label_10);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_14);

        AN_out_1 = new QLineEdit(widget);
        AN_out_1->setObjectName(QStringLiteral("AN_out_1"));
        AN_out_1->setEnabled(false);

        horizontalLayout_9->addWidget(AN_out_1);


        verticalLayout_5->addLayout(horizontalLayout_9);

        widget1 = new QWidget(tab);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(10, 0, 264, 331));
        horizontalLayout_11 = new QHBoxLayout(widget1);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        DIG_check = new QCheckBox(widget1);
        DIG_check->setObjectName(QStringLiteral("DIG_check"));

        verticalLayout_2->addWidget(DIG_check);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget1);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        DIG_dir_0 = new QPushButton(widget1);
        DIG_dir_0->setObjectName(QStringLiteral("DIG_dir_0"));
        DIG_dir_0->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DIG_dir_0->sizePolicy().hasHeightForWidth());
        DIG_dir_0->setSizePolicy(sizePolicy);
        DIG_dir_0->setMaximumSize(QSize(40, 23));
        DIG_dir_0->setBaseSize(QSize(40, 23));

        horizontalLayout->addWidget(DIG_dir_0);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        DIG_value_0 = new QPushButton(widget1);
        DIG_value_0->setObjectName(QStringLiteral("DIG_value_0"));
        DIG_value_0->setEnabled(false);
        DIG_value_0->setMaximumSize(QSize(50, 23));

        horizontalLayout->addWidget(DIG_value_0);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        DIG_dir_1 = new QPushButton(widget1);
        DIG_dir_1->setObjectName(QStringLiteral("DIG_dir_1"));
        DIG_dir_1->setEnabled(false);
        DIG_dir_1->setMaximumSize(QSize(40, 23));

        horizontalLayout_2->addWidget(DIG_dir_1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        DIG_value_1 = new QPushButton(widget1);
        DIG_value_1->setObjectName(QStringLiteral("DIG_value_1"));
        DIG_value_1->setEnabled(false);
        DIG_value_1->setMaximumSize(QSize(50, 23));

        horizontalLayout_2->addWidget(DIG_value_1);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(widget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        DIG_dir_2 = new QPushButton(widget1);
        DIG_dir_2->setObjectName(QStringLiteral("DIG_dir_2"));
        DIG_dir_2->setEnabled(false);
        DIG_dir_2->setMaximumSize(QSize(40, 23));

        horizontalLayout_3->addWidget(DIG_dir_2);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        DIG_value_2 = new QPushButton(widget1);
        DIG_value_2->setObjectName(QStringLiteral("DIG_value_2"));
        DIG_value_2->setEnabled(false);
        DIG_value_2->setMaximumSize(QSize(50, 23));
        DIG_value_2->setAutoFillBackground(true);
        DIG_value_2->setCheckable(false);

        horizontalLayout_3->addWidget(DIG_value_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(widget1);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        DIG_dir_3 = new QPushButton(widget1);
        DIG_dir_3->setObjectName(QStringLiteral("DIG_dir_3"));
        DIG_dir_3->setEnabled(false);
        DIG_dir_3->setMaximumSize(QSize(40, 23));

        horizontalLayout_4->addWidget(DIG_dir_3);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);

        DIG_value_3 = new QPushButton(widget1);
        DIG_value_3->setObjectName(QStringLiteral("DIG_value_3"));
        DIG_value_3->setEnabled(false);
        DIG_value_3->setMaximumSize(QSize(50, 23));

        horizontalLayout_4->addWidget(DIG_value_3);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(verticalLayout);

        line = new QFrame(widget1);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);


        verticalLayout_6->addLayout(verticalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        ANIN_check = new QCheckBox(widget1);
        ANIN_check->setObjectName(QStringLiteral("ANIN_check"));

        verticalLayout_4->addWidget(ANIN_check);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(widget1);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);

        AN_num_0 = new QLCDNumber(widget1);
        AN_num_0->setObjectName(QStringLiteral("AN_num_0"));
        AN_num_0->setEnabled(false);
        AN_num_0->setMinimumSize(QSize(51, 31));
        AN_num_0->setFrameShape(QFrame::NoFrame);
        AN_num_0->setFrameShadow(QFrame::Sunken);
        AN_num_0->setLineWidth(4);
        AN_num_0->setMidLineWidth(1);
        AN_num_0->setSmallDecimalPoint(true);
        AN_num_0->setDigitCount(3);
        AN_num_0->setSegmentStyle(QLCDNumber::Flat);
        AN_num_0->setProperty("value", QVariant(4.95));

        horizontalLayout_5->addWidget(AN_num_0);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_6 = new QLabel(widget1);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_6->addWidget(label_6);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_10);

        AN_num_1 = new QLCDNumber(widget1);
        AN_num_1->setObjectName(QStringLiteral("AN_num_1"));
        AN_num_1->setEnabled(false);
        AN_num_1->setMinimumSize(QSize(51, 31));
        AN_num_1->setFrameShape(QFrame::NoFrame);
        AN_num_1->setFrameShadow(QFrame::Sunken);
        AN_num_1->setLineWidth(4);
        AN_num_1->setMidLineWidth(1);
        AN_num_1->setSmallDecimalPoint(true);
        AN_num_1->setDigitCount(3);
        AN_num_1->setSegmentStyle(QLCDNumber::Flat);
        AN_num_1->setProperty("value", QVariant(4.95));

        horizontalLayout_6->addWidget(AN_num_1);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_7 = new QLabel(widget1);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_7->addWidget(label_7);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_11);

        AN_num_2 = new QLCDNumber(widget1);
        AN_num_2->setObjectName(QStringLiteral("AN_num_2"));
        AN_num_2->setEnabled(false);
        AN_num_2->setMinimumSize(QSize(51, 31));
        AN_num_2->setFrameShape(QFrame::NoFrame);
        AN_num_2->setFrameShadow(QFrame::Sunken);
        AN_num_2->setLineWidth(4);
        AN_num_2->setMidLineWidth(1);
        AN_num_2->setSmallDecimalPoint(true);
        AN_num_2->setDigitCount(3);
        AN_num_2->setSegmentStyle(QLCDNumber::Flat);
        AN_num_2->setProperty("value", QVariant(4.95));

        horizontalLayout_7->addWidget(AN_num_2);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_8 = new QLabel(widget1);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_8->addWidget(label_8);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_12);

        AN_num_3 = new QLCDNumber(widget1);
        AN_num_3->setObjectName(QStringLiteral("AN_num_3"));
        AN_num_3->setEnabled(false);
        AN_num_3->setMinimumSize(QSize(51, 31));
        AN_num_3->setFrameShape(QFrame::NoFrame);
        AN_num_3->setFrameShadow(QFrame::Sunken);
        AN_num_3->setLineWidth(4);
        AN_num_3->setMidLineWidth(1);
        AN_num_3->setSmallDecimalPoint(true);
        AN_num_3->setDigitCount(3);
        AN_num_3->setSegmentStyle(QLCDNumber::Flat);
        AN_num_3->setProperty("value", QVariant(4.95));

        horizontalLayout_8->addWidget(AN_num_3);


        verticalLayout_3->addLayout(horizontalLayout_8);


        verticalLayout_4->addLayout(verticalLayout_3);


        verticalLayout_6->addLayout(verticalLayout_4);


        horizontalLayout_11->addLayout(verticalLayout_6);

        line_2 = new QFrame(widget1);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_11->addWidget(line_2);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 575, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        ANOUT_check->setText(QApplication::translate("MainWindow", "Analog OUT", 0));
        label_9->setText(QApplication::translate("MainWindow", "Analog A", 0));
        label_10->setText(QApplication::translate("MainWindow", "Analog B", 0));
        DIG_check->setText(QApplication::translate("MainWindow", "Digital IN/OUT", 0));
        label->setText(QApplication::translate("MainWindow", "Digital 0", 0));
        DIG_dir_0->setText(QApplication::translate("MainWindow", "IN", 0));
        DIG_value_0->setText(QApplication::translate("MainWindow", "False", 0));
        label_2->setText(QApplication::translate("MainWindow", "Digital 1", 0));
        DIG_dir_1->setText(QApplication::translate("MainWindow", "IN", 0));
        DIG_value_1->setText(QApplication::translate("MainWindow", "False", 0));
        label_3->setText(QApplication::translate("MainWindow", "Digital 2", 0));
        DIG_dir_2->setText(QApplication::translate("MainWindow", "IN", 0));
        DIG_value_2->setText(QApplication::translate("MainWindow", "False", 0));
        label_4->setText(QApplication::translate("MainWindow", "Digital 3", 0));
        DIG_dir_3->setText(QApplication::translate("MainWindow", "IN", 0));
        DIG_value_3->setText(QApplication::translate("MainWindow", "False", 0));
        ANIN_check->setText(QApplication::translate("MainWindow", "Analog IN", 0));
        label_5->setText(QApplication::translate("MainWindow", "Analog 0", 0));
        label_6->setText(QApplication::translate("MainWindow", "Analog 1", 0));
        label_7->setText(QApplication::translate("MainWindow", "Analog 2", 0));
        label_8->setText(QApplication::translate("MainWindow", "Analog 3", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Tab 1", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Tab 2", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
