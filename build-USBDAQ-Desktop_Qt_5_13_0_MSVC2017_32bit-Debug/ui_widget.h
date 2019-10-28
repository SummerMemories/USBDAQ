/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *shadowWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *title;
    QPushButton *btnClose;
    QFrame *frame;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *showData4_ratio;
    QLineEdit *showData8_return;
    QPushButton *btnGetData5;
    QLineEdit *showData6_action;
    QPushButton *btnGetData3;
    QPushButton *btnGetData4;
    QLineEdit *showData5_return;
    QLineEdit *showData9_return;
    QPushButton *btnGetData1;
    QLineEdit *showData9_action;
    QLineEdit *showData1_action;
    QLineEdit *showData8_action;
    QLineEdit *showData3_ratio;
    QLabel *label_2;
    QLineEdit *showData4_return;
    QLineEdit *showData7_return;
    QLineEdit *showData3_action;
    QLineEdit *showData10_action;
    QLineEdit *showData4_action;
    QLineEdit *showData5_ratio;
    QLineEdit *showData6_return;
    QLineEdit *showData2_return;
    QLineEdit *showData1_return;
    QLabel *label_3;
    QLineEdit *showData7_action;
    QPushButton *btnGetData2;
    QLineEdit *showData5_action;
    QLineEdit *showData2_action;
    QLineEdit *showData3_return;
    QLineEdit *showData1_ratio;
    QLineEdit *showData2_ratio;
    QLineEdit *showData10_return;
    QLabel *label_4;
    QLabel *label_1;
    QLineEdit *showData10_ratio;
    QLineEdit *showData9_ratio;
    QLineEdit *showData8_ratio;
    QLineEdit *showData7_ratio;
    QLineEdit *showData6_ratio;
    QPushButton *btnGetData6;
    QPushButton *btnGetData7;
    QPushButton *btnGetData8;
    QPushButton *btnGetData9;
    QPushButton *btnGetData10;
    QPushButton *btnOpenDevice;
    QPushButton *btnCloseDevice;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(913, 668);
        horizontalLayout = new QHBoxLayout(Widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        shadowWidget = new QWidget(Widget);
        shadowWidget->setObjectName(QString::fromUtf8("shadowWidget"));
        shadowWidget->setStyleSheet(QString::fromUtf8("#shadowWidget\n"
"{\n"
"	border-radius:5px;\n"
"	border-image: url(:/resource/2.jpg);\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        verticalLayout = new QVBoxLayout(shadowWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        title = new QLabel(shadowWidget);
        title->setObjectName(QString::fromUtf8("title"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        title->setFont(font);
        title->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(title);

        btnClose = new QPushButton(shadowWidget);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnClose->sizePolicy().hasHeightForWidth());
        btnClose->setSizePolicy(sizePolicy);
        btnClose->setMinimumSize(QSize(42, 42));
        btnClose->setMaximumSize(QSize(42, 42));
        btnClose->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(btnClose);


        verticalLayout->addLayout(horizontalLayout_2);

        frame = new QFrame(shadowWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"        border: 2px solid gray;\n"
"        border-radius: 5px;\n"
"        padding: 0 8px;\n"
"        background:rgb(234, 234, 234);\n"
"        selection-background-color: darkgray;\n"
"}\n"
"QPushButton{\n"
"		border: 2px solid #8f8f91;\n"
"		border-radius: 6px;\n"
"		background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                        stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"		min-width: 80px;\n"
"}\n"
"QPushButton:pressed{\n"
"		background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                        stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayoutWidget = new QWidget(frame);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(90, 10, 631, 511));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        showData4_ratio = new QLineEdit(gridLayoutWidget);
        showData4_ratio->setObjectName(QString::fromUtf8("showData4_ratio"));
        showData4_ratio->setEnabled(false);
        sizePolicy.setHeightForWidth(showData4_ratio->sizePolicy().hasHeightForWidth());
        showData4_ratio->setSizePolicy(sizePolicy);
        showData4_ratio->setMinimumSize(QSize(120, 30));

        gridLayout->addWidget(showData4_ratio, 4, 3, 1, 1);

        showData8_return = new QLineEdit(gridLayoutWidget);
        showData8_return->setObjectName(QString::fromUtf8("showData8_return"));
        showData8_return->setEnabled(false);
        sizePolicy.setHeightForWidth(showData8_return->sizePolicy().hasHeightForWidth());
        showData8_return->setSizePolicy(sizePolicy);
        showData8_return->setMinimumSize(QSize(120, 30));

        gridLayout->addWidget(showData8_return, 8, 2, 1, 1);

        btnGetData5 = new QPushButton(gridLayoutWidget);
        btnGetData5->setObjectName(QString::fromUtf8("btnGetData5"));
        btnGetData5->setMinimumSize(QSize(84, 30));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\232\266\344\271\246"));
        font1.setPointSize(10);
        btnGetData5->setFont(font1);

        gridLayout->addWidget(btnGetData5, 5, 0, 1, 1);

        showData6_action = new QLineEdit(gridLayoutWidget);
        showData6_action->setObjectName(QString::fromUtf8("showData6_action"));
        showData6_action->setEnabled(false);
        sizePolicy.setHeightForWidth(showData6_action->sizePolicy().hasHeightForWidth());
        showData6_action->setSizePolicy(sizePolicy);
        showData6_action->setMinimumSize(QSize(120, 30));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font2.setPointSize(10);
        showData6_action->setFont(font2);
        showData6_action->setStyleSheet(QString::fromUtf8(""));
        showData6_action->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(showData6_action, 6, 1, 1, 1);

        btnGetData3 = new QPushButton(gridLayoutWidget);
        btnGetData3->setObjectName(QString::fromUtf8("btnGetData3"));
        btnGetData3->setMinimumSize(QSize(84, 30));
        btnGetData3->setFont(font1);

        gridLayout->addWidget(btnGetData3, 3, 0, 1, 1);

        btnGetData4 = new QPushButton(gridLayoutWidget);
        btnGetData4->setObjectName(QString::fromUtf8("btnGetData4"));
        btnGetData4->setMinimumSize(QSize(84, 30));
        btnGetData4->setFont(font1);

        gridLayout->addWidget(btnGetData4, 4, 0, 1, 1);

        showData5_return = new QLineEdit(gridLayoutWidget);
        showData5_return->setObjectName(QString::fromUtf8("showData5_return"));
        showData5_return->setEnabled(false);
        sizePolicy.setHeightForWidth(showData5_return->sizePolicy().hasHeightForWidth());
        showData5_return->setSizePolicy(sizePolicy);
        showData5_return->setMinimumSize(QSize(120, 30));

        gridLayout->addWidget(showData5_return, 5, 2, 1, 1);

        showData9_return = new QLineEdit(gridLayoutWidget);
        showData9_return->setObjectName(QString::fromUtf8("showData9_return"));
        showData9_return->setEnabled(false);
        sizePolicy.setHeightForWidth(showData9_return->sizePolicy().hasHeightForWidth());
        showData9_return->setSizePolicy(sizePolicy);
        showData9_return->setMinimumSize(QSize(120, 30));

        gridLayout->addWidget(showData9_return, 9, 2, 1, 1);

        btnGetData1 = new QPushButton(gridLayoutWidget);
        btnGetData1->setObjectName(QString::fromUtf8("btnGetData1"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnGetData1->sizePolicy().hasHeightForWidth());
        btnGetData1->setSizePolicy(sizePolicy2);
        btnGetData1->setMinimumSize(QSize(84, 30));
        btnGetData1->setFont(font1);
        btnGetData1->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(btnGetData1, 1, 0, 1, 1);

        showData9_action = new QLineEdit(gridLayoutWidget);
        showData9_action->setObjectName(QString::fromUtf8("showData9_action"));
        showData9_action->setEnabled(false);
        sizePolicy.setHeightForWidth(showData9_action->sizePolicy().hasHeightForWidth());
        showData9_action->setSizePolicy(sizePolicy);
        showData9_action->setMinimumSize(QSize(120, 30));
        showData9_action->setFont(font2);
        showData9_action->setStyleSheet(QString::fromUtf8(""));
        showData9_action->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(showData9_action, 9, 1, 1, 1);

        showData1_action = new QLineEdit(gridLayoutWidget);
        showData1_action->setObjectName(QString::fromUtf8("showData1_action"));
        showData1_action->setEnabled(false);
        sizePolicy2.setHeightForWidth(showData1_action->sizePolicy().hasHeightForWidth());
        showData1_action->setSizePolicy(sizePolicy2);
        showData1_action->setMinimumSize(QSize(150, 30));
        showData1_action->setMaximumSize(QSize(16777215, 16777215));
        showData1_action->setFont(font2);
        showData1_action->setStyleSheet(QString::fromUtf8(""));
        showData1_action->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(showData1_action, 1, 1, 1, 1);

        showData8_action = new QLineEdit(gridLayoutWidget);
        showData8_action->setObjectName(QString::fromUtf8("showData8_action"));
        showData8_action->setEnabled(false);
        sizePolicy.setHeightForWidth(showData8_action->sizePolicy().hasHeightForWidth());
        showData8_action->setSizePolicy(sizePolicy);
        showData8_action->setMinimumSize(QSize(120, 30));
        showData8_action->setFont(font2);
        showData8_action->setStyleSheet(QString::fromUtf8(""));
        showData8_action->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(showData8_action, 8, 1, 1, 1);

        showData3_ratio = new QLineEdit(gridLayoutWidget);
        showData3_ratio->setObjectName(QString::fromUtf8("showData3_ratio"));
        showData3_ratio->setEnabled(false);
        sizePolicy.setHeightForWidth(showData3_ratio->sizePolicy().hasHeightForWidth());
        showData3_ratio->setSizePolicy(sizePolicy);
        showData3_ratio->setMinimumSize(QSize(120, 30));

        gridLayout->addWidget(showData3_ratio, 3, 3, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy3);
        label_2->setMinimumSize(QSize(0, 30));
        label_2->setMaximumSize(QSize(16777215, 16777215));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light"));
        font3.setPointSize(11);
        label_2->setFont(font3);
        label_2->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        showData4_return = new QLineEdit(gridLayoutWidget);
        showData4_return->setObjectName(QString::fromUtf8("showData4_return"));
        showData4_return->setEnabled(false);
        sizePolicy.setHeightForWidth(showData4_return->sizePolicy().hasHeightForWidth());
        showData4_return->setSizePolicy(sizePolicy);
        showData4_return->setMinimumSize(QSize(120, 30));

        gridLayout->addWidget(showData4_return, 4, 2, 1, 1);

        showData7_return = new QLineEdit(gridLayoutWidget);
        showData7_return->setObjectName(QString::fromUtf8("showData7_return"));
        showData7_return->setEnabled(false);
        sizePolicy.setHeightForWidth(showData7_return->sizePolicy().hasHeightForWidth());
        showData7_return->setSizePolicy(sizePolicy);
        showData7_return->setMinimumSize(QSize(120, 30));

        gridLayout->addWidget(showData7_return, 7, 2, 1, 1);

        showData3_action = new QLineEdit(gridLayoutWidget);
        showData3_action->setObjectName(QString::fromUtf8("showData3_action"));
        showData3_action->setEnabled(false);
        sizePolicy.setHeightForWidth(showData3_action->sizePolicy().hasHeightForWidth());
        showData3_action->setSizePolicy(sizePolicy);
        showData3_action->setMinimumSize(QSize(120, 30));
        showData3_action->setFont(font2);
        showData3_action->setStyleSheet(QString::fromUtf8(""));
        showData3_action->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(showData3_action, 3, 1, 1, 1);

        showData10_action = new QLineEdit(gridLayoutWidget);
        showData10_action->setObjectName(QString::fromUtf8("showData10_action"));
        showData10_action->setEnabled(false);
        sizePolicy.setHeightForWidth(showData10_action->sizePolicy().hasHeightForWidth());
        showData10_action->setSizePolicy(sizePolicy);
        showData10_action->setMinimumSize(QSize(120, 30));
        showData10_action->setFont(font2);
        showData10_action->setStyleSheet(QString::fromUtf8(""));
        showData10_action->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(showData10_action, 10, 1, 1, 1);

        showData4_action = new QLineEdit(gridLayoutWidget);
        showData4_action->setObjectName(QString::fromUtf8("showData4_action"));
        showData4_action->setEnabled(false);
        sizePolicy.setHeightForWidth(showData4_action->sizePolicy().hasHeightForWidth());
        showData4_action->setSizePolicy(sizePolicy);
        showData4_action->setMinimumSize(QSize(120, 30));
        showData4_action->setFont(font2);
        showData4_action->setStyleSheet(QString::fromUtf8(""));
        showData4_action->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(showData4_action, 4, 1, 1, 1);

        showData5_ratio = new QLineEdit(gridLayoutWidget);
        showData5_ratio->setObjectName(QString::fromUtf8("showData5_ratio"));
        showData5_ratio->setEnabled(false);
        sizePolicy.setHeightForWidth(showData5_ratio->sizePolicy().hasHeightForWidth());
        showData5_ratio->setSizePolicy(sizePolicy);
        showData5_ratio->setMinimumSize(QSize(120, 30));

        gridLayout->addWidget(showData5_ratio, 5, 3, 1, 1);

        showData6_return = new QLineEdit(gridLayoutWidget);
        showData6_return->setObjectName(QString::fromUtf8("showData6_return"));
        showData6_return->setEnabled(false);
        sizePolicy.setHeightForWidth(showData6_return->sizePolicy().hasHeightForWidth());
        showData6_return->setSizePolicy(sizePolicy);
        showData6_return->setMinimumSize(QSize(120, 30));

        gridLayout->addWidget(showData6_return, 6, 2, 1, 1);

        showData2_return = new QLineEdit(gridLayoutWidget);
        showData2_return->setObjectName(QString::fromUtf8("showData2_return"));
        showData2_return->setEnabled(false);
        sizePolicy.setHeightForWidth(showData2_return->sizePolicy().hasHeightForWidth());
        showData2_return->setSizePolicy(sizePolicy);
        showData2_return->setMinimumSize(QSize(120, 30));

        gridLayout->addWidget(showData2_return, 2, 2, 1, 1);

        showData1_return = new QLineEdit(gridLayoutWidget);
        showData1_return->setObjectName(QString::fromUtf8("showData1_return"));
        showData1_return->setEnabled(false);
        sizePolicy2.setHeightForWidth(showData1_return->sizePolicy().hasHeightForWidth());
        showData1_return->setSizePolicy(sizePolicy2);
        showData1_return->setMinimumSize(QSize(120, 30));

        gridLayout->addWidget(showData1_return, 1, 2, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy3.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy3);
        label_3->setMinimumSize(QSize(0, 30));
        label_3->setFont(font3);
        label_3->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        showData7_action = new QLineEdit(gridLayoutWidget);
        showData7_action->setObjectName(QString::fromUtf8("showData7_action"));
        showData7_action->setEnabled(false);
        sizePolicy.setHeightForWidth(showData7_action->sizePolicy().hasHeightForWidth());
        showData7_action->setSizePolicy(sizePolicy);
        showData7_action->setMinimumSize(QSize(120, 30));
        showData7_action->setFont(font2);
        showData7_action->setStyleSheet(QString::fromUtf8(""));
        showData7_action->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(showData7_action, 7, 1, 1, 1);

        btnGetData2 = new QPushButton(gridLayoutWidget);
        btnGetData2->setObjectName(QString::fromUtf8("btnGetData2"));
        btnGetData2->setMinimumSize(QSize(84, 30));
        btnGetData2->setFont(font1);

        gridLayout->addWidget(btnGetData2, 2, 0, 1, 1);

        showData5_action = new QLineEdit(gridLayoutWidget);
        showData5_action->setObjectName(QString::fromUtf8("showData5_action"));
        showData5_action->setEnabled(false);
        sizePolicy.setHeightForWidth(showData5_action->sizePolicy().hasHeightForWidth());
        showData5_action->setSizePolicy(sizePolicy);
        showData5_action->setMinimumSize(QSize(120, 30));
        showData5_action->setFont(font2);
        showData5_action->setStyleSheet(QString::fromUtf8(""));
        showData5_action->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(showData5_action, 5, 1, 1, 1);

        showData2_action = new QLineEdit(gridLayoutWidget);
        showData2_action->setObjectName(QString::fromUtf8("showData2_action"));
        showData2_action->setEnabled(false);
        sizePolicy.setHeightForWidth(showData2_action->sizePolicy().hasHeightForWidth());
        showData2_action->setSizePolicy(sizePolicy);
        showData2_action->setMinimumSize(QSize(120, 30));
        showData2_action->setFont(font2);
        showData2_action->setStyleSheet(QString::fromUtf8(""));
        showData2_action->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(showData2_action, 2, 1, 1, 1);

        showData3_return = new QLineEdit(gridLayoutWidget);
        showData3_return->setObjectName(QString::fromUtf8("showData3_return"));
        showData3_return->setEnabled(false);
        sizePolicy.setHeightForWidth(showData3_return->sizePolicy().hasHeightForWidth());
        showData3_return->setSizePolicy(sizePolicy);
        showData3_return->setMinimumSize(QSize(120, 30));

        gridLayout->addWidget(showData3_return, 3, 2, 1, 1);

        showData1_ratio = new QLineEdit(gridLayoutWidget);
        showData1_ratio->setObjectName(QString::fromUtf8("showData1_ratio"));
        showData1_ratio->setEnabled(false);
        sizePolicy2.setHeightForWidth(showData1_ratio->sizePolicy().hasHeightForWidth());
        showData1_ratio->setSizePolicy(sizePolicy2);
        showData1_ratio->setMinimumSize(QSize(120, 30));

        gridLayout->addWidget(showData1_ratio, 1, 3, 1, 1);

        showData2_ratio = new QLineEdit(gridLayoutWidget);
        showData2_ratio->setObjectName(QString::fromUtf8("showData2_ratio"));
        showData2_ratio->setEnabled(false);
        sizePolicy.setHeightForWidth(showData2_ratio->sizePolicy().hasHeightForWidth());
        showData2_ratio->setSizePolicy(sizePolicy);
        showData2_ratio->setMinimumSize(QSize(120, 30));

        gridLayout->addWidget(showData2_ratio, 2, 3, 1, 1);

        showData10_return = new QLineEdit(gridLayoutWidget);
        showData10_return->setObjectName(QString::fromUtf8("showData10_return"));
        showData10_return->setEnabled(false);
        sizePolicy.setHeightForWidth(showData10_return->sizePolicy().hasHeightForWidth());
        showData10_return->setSizePolicy(sizePolicy);
        showData10_return->setMinimumSize(QSize(120, 30));

        gridLayout->addWidget(showData10_return, 10, 2, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy3.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy3);
        label_4->setMinimumSize(QSize(0, 30));
        label_4->setFont(font3);
        label_4->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout->addWidget(label_4, 0, 3, 1, 1);

        label_1 = new QLabel(gridLayoutWidget);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_1->sizePolicy().hasHeightForWidth());
        label_1->setSizePolicy(sizePolicy4);
        label_1->setMinimumSize(QSize(150, 30));
        label_1->setMaximumSize(QSize(150, 30));
        label_1->setFont(font3);
        label_1->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout->addWidget(label_1, 0, 0, 1, 1);

        showData10_ratio = new QLineEdit(gridLayoutWidget);
        showData10_ratio->setObjectName(QString::fromUtf8("showData10_ratio"));
        showData10_ratio->setEnabled(false);
        sizePolicy.setHeightForWidth(showData10_ratio->sizePolicy().hasHeightForWidth());
        showData10_ratio->setSizePolicy(sizePolicy);
        showData10_ratio->setMinimumSize(QSize(120, 30));

        gridLayout->addWidget(showData10_ratio, 10, 3, 1, 1);

        showData9_ratio = new QLineEdit(gridLayoutWidget);
        showData9_ratio->setObjectName(QString::fromUtf8("showData9_ratio"));
        showData9_ratio->setEnabled(false);
        sizePolicy.setHeightForWidth(showData9_ratio->sizePolicy().hasHeightForWidth());
        showData9_ratio->setSizePolicy(sizePolicy);
        showData9_ratio->setMinimumSize(QSize(120, 30));

        gridLayout->addWidget(showData9_ratio, 9, 3, 1, 1);

        showData8_ratio = new QLineEdit(gridLayoutWidget);
        showData8_ratio->setObjectName(QString::fromUtf8("showData8_ratio"));
        showData8_ratio->setEnabled(false);
        sizePolicy.setHeightForWidth(showData8_ratio->sizePolicy().hasHeightForWidth());
        showData8_ratio->setSizePolicy(sizePolicy);
        showData8_ratio->setMinimumSize(QSize(120, 30));

        gridLayout->addWidget(showData8_ratio, 8, 3, 1, 1);

        showData7_ratio = new QLineEdit(gridLayoutWidget);
        showData7_ratio->setObjectName(QString::fromUtf8("showData7_ratio"));
        showData7_ratio->setEnabled(false);
        sizePolicy.setHeightForWidth(showData7_ratio->sizePolicy().hasHeightForWidth());
        showData7_ratio->setSizePolicy(sizePolicy);
        showData7_ratio->setMinimumSize(QSize(120, 30));

        gridLayout->addWidget(showData7_ratio, 7, 3, 1, 1);

        showData6_ratio = new QLineEdit(gridLayoutWidget);
        showData6_ratio->setObjectName(QString::fromUtf8("showData6_ratio"));
        showData6_ratio->setEnabled(false);
        sizePolicy.setHeightForWidth(showData6_ratio->sizePolicy().hasHeightForWidth());
        showData6_ratio->setSizePolicy(sizePolicy);
        showData6_ratio->setMinimumSize(QSize(120, 30));

        gridLayout->addWidget(showData6_ratio, 6, 3, 1, 1);

        btnGetData6 = new QPushButton(gridLayoutWidget);
        btnGetData6->setObjectName(QString::fromUtf8("btnGetData6"));
        btnGetData6->setMinimumSize(QSize(84, 30));
        btnGetData6->setFont(font1);

        gridLayout->addWidget(btnGetData6, 6, 0, 1, 1);

        btnGetData7 = new QPushButton(gridLayoutWidget);
        btnGetData7->setObjectName(QString::fromUtf8("btnGetData7"));
        btnGetData7->setMinimumSize(QSize(84, 30));
        btnGetData7->setFont(font1);

        gridLayout->addWidget(btnGetData7, 7, 0, 1, 1);

        btnGetData8 = new QPushButton(gridLayoutWidget);
        btnGetData8->setObjectName(QString::fromUtf8("btnGetData8"));
        btnGetData8->setMinimumSize(QSize(84, 30));
        btnGetData8->setFont(font1);

        gridLayout->addWidget(btnGetData8, 8, 0, 1, 1);

        btnGetData9 = new QPushButton(gridLayoutWidget);
        btnGetData9->setObjectName(QString::fromUtf8("btnGetData9"));
        btnGetData9->setMinimumSize(QSize(84, 30));
        btnGetData9->setFont(font1);

        gridLayout->addWidget(btnGetData9, 9, 0, 1, 1);

        btnGetData10 = new QPushButton(gridLayoutWidget);
        btnGetData10->setObjectName(QString::fromUtf8("btnGetData10"));
        btnGetData10->setMinimumSize(QSize(84, 30));
        btnGetData10->setFont(font1);

        gridLayout->addWidget(btnGetData10, 10, 0, 1, 1);

        btnOpenDevice = new QPushButton(frame);
        btnOpenDevice->setObjectName(QString::fromUtf8("btnOpenDevice"));
        btnOpenDevice->setGeometry(QRect(750, 190, 93, 28));
        btnCloseDevice = new QPushButton(frame);
        btnCloseDevice->setObjectName(QString::fromUtf8("btnCloseDevice"));
        btnCloseDevice->setGeometry(QRect(750, 100, 93, 28));

        verticalLayout->addWidget(frame);


        horizontalLayout->addWidget(shadowWidget);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        title->setText(QCoreApplication::translate("Widget", "\347\275\227\345\271\263\345\217\230\347\224\265\347\253\231 500kV 1563 \345\274\200\345\205\263\344\270\211\347\233\270\344\270\215\344\270\200\350\207\264\347\273\247\347\224\265\345\231\250\350\257\225\351\252\214\347\273\223\346\236\234", nullptr));
        btnClose->setText(QString());
        btnGetData5->setText(QCoreApplication::translate("Widget", "5", nullptr));
        showData6_action->setText(QCoreApplication::translate("Widget", "0.00", nullptr));
        btnGetData3->setText(QCoreApplication::translate("Widget", "3", nullptr));
        btnGetData4->setText(QCoreApplication::translate("Widget", "4", nullptr));
        btnGetData1->setText(QCoreApplication::translate("Widget", "1", nullptr));
        showData9_action->setText(QCoreApplication::translate("Widget", "0.00", nullptr));
        showData1_action->setText(QCoreApplication::translate("Widget", "0.00", nullptr));
        showData8_action->setText(QCoreApplication::translate("Widget", "0.00", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\345\212\250\344\275\234\347\224\265\345\216\213\345\200\274\357\274\210V\357\274\211", nullptr));
        showData3_action->setText(QCoreApplication::translate("Widget", "0.00", nullptr));
        showData10_action->setText(QCoreApplication::translate("Widget", "0.00", nullptr));
        showData4_action->setText(QCoreApplication::translate("Widget", "0.00", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\350\277\224\345\233\236\347\224\265\345\216\213\345\200\274(V)", nullptr));
        showData7_action->setText(QCoreApplication::translate("Widget", "0.00", nullptr));
        btnGetData2->setText(QCoreApplication::translate("Widget", "2", nullptr));
        showData5_action->setText(QCoreApplication::translate("Widget", "0.00", nullptr));
        showData2_action->setText(QCoreApplication::translate("Widget", "0.00", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "\350\277\224\345\233\236\347\263\273\346\225\260", nullptr));
        label_1->setText(QCoreApplication::translate("Widget", "\345\272\217\345\217\267", nullptr));
        btnGetData6->setText(QCoreApplication::translate("Widget", "6", nullptr));
        btnGetData7->setText(QCoreApplication::translate("Widget", "7", nullptr));
        btnGetData8->setText(QCoreApplication::translate("Widget", "8", nullptr));
        btnGetData9->setText(QCoreApplication::translate("Widget", "9", nullptr));
        btnGetData10->setText(QCoreApplication::translate("Widget", "10", nullptr));
        btnOpenDevice->setText(QCoreApplication::translate("Widget", "\346\211\223\345\274\200\350\256\276\345\244\207", nullptr));
        btnCloseDevice->setText(QCoreApplication::translate("Widget", "\345\205\263\351\227\255\350\256\276\345\244\207", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
