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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *shadowWidget;
    QVBoxLayout *verticalLayout;
    QWidget *titleWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *title;
    QPushButton *btnMin;
    QPushButton *btnClose;
    QFrame *frame;
    QPushButton *btn_Openport;
    QComboBox *ComName;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QTableWidget *tableWidget;
    QWidget *widget;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_7;
    QLabel *label_2;
    QWidget *widget_2;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_8;
    QLabel *label_6;
    QWidget *widget_3;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_9;
    QLabel *label_4;
    QPushButton *pushButton_5;
    QLabel *label_3;
    QWidget *widget_4;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_10;
    QLabel *label_5;
    QGraphicsView *view;
    QLabel *label_7;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(1346, 781);
        horizontalLayout = new QHBoxLayout(Widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        shadowWidget = new QWidget(Widget);
        shadowWidget->setObjectName(QString::fromUtf8("shadowWidget"));
        shadowWidget->setStyleSheet(QString::fromUtf8("#shadowWidget\n"
"{\n"
"	border-radius:5px;\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        verticalLayout = new QVBoxLayout(shadowWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        titleWidget = new QWidget(shadowWidget);
        titleWidget->setObjectName(QString::fromUtf8("titleWidget"));
        titleWidget->setStyleSheet(QString::fromUtf8("#titleWidget\n"
"{\n"
"\n"
"	background-color: rgb(85, 235, 235);\n"
"	border-top-left-radius:5px;\n"
"	border-top-right-radius:5px;\n"
"}"));
        horizontalLayout_2 = new QHBoxLayout(titleWidget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        title = new QLabel(titleWidget);
        title->setObjectName(QString::fromUtf8("title"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(16);
        title->setFont(font);
        title->setStyleSheet(QString::fromUtf8("\n"
"border-top-left-radius:5px;"));
        title->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(title);

        btnMin = new QPushButton(titleWidget);
        btnMin->setObjectName(QString::fromUtf8("btnMin"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnMin->sizePolicy().hasHeightForWidth());
        btnMin->setSizePolicy(sizePolicy);
        btnMin->setMinimumSize(QSize(42, 42));
        btnMin->setMaximumSize(QSize(42, 42));

        horizontalLayout_2->addWidget(btnMin);

        btnClose = new QPushButton(titleWidget);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        sizePolicy.setHeightForWidth(btnClose->sizePolicy().hasHeightForWidth());
        btnClose->setSizePolicy(sizePolicy);
        btnClose->setMinimumSize(QSize(42, 42));
        btnClose->setMaximumSize(QSize(42, 42));
        btnClose->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(btnClose);


        verticalLayout->addWidget(titleWidget);

        frame = new QFrame(shadowWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"        border: 2px solid gray; \n"
"        padding: 0 8px;\n"
"        background:rgb(234, 234, 234);\n"
"        selection-background-color: darkgray;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        btn_Openport = new QPushButton(frame);
        btn_Openport->setObjectName(QString::fromUtf8("btn_Openport"));
        btn_Openport->setGeometry(QRect(280, 630, 121, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(10);
        btn_Openport->setFont(font1);
        btn_Openport->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        ComName = new QComboBox(frame);
        ComName->setObjectName(QString::fromUtf8("ComName"));
        ComName->setGeometry(QRect(150, 630, 121, 51));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light"));
        font2.setPointSize(11);
        ComName->setFont(font2);
        ComName->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"        height: 25px;\n"
"        border-radius: 4px;\n"
"        border: 1px solid rgb(111, 156, 207);\n"
"        background: white;\n"
"}\n"
"QComboBox:enabled {\n"
"        color: rgb(84, 84, 84);\n"
"}\n"
"QComboBox:!enabled {\n"
"        color: rgb(80, 80, 80);\n"
"}\n"
"QComboBox:enabled:hover, QComboBox:enabled:focus {\n"
"        color: rgb(51, 51, 51);\n"
"}\n"
"QComboBox::drop-down {\n"
"        width: 20px;\n"
"        border: none;\n"
"        background: transparent;\n"
"}\n"
"QComboBox::drop-down:hover {\n"
"        background: rgba(255, 255, 255, 30);\n"
"}\n"
"QComboBox::down-arrow {\n"
"        image: url(:/White/arrowBottom);\n"
"}\n"
"QComboBox::down-arrow:on {\n"
"        /**top: 1px;**/\n"
"}\n"
"QComboBox QAbstractItemView {\n"
"        border: 1px solid rgb(111, 156, 207);\n"
"        background: white;\n"
"        outline: none;\n"
"}\n"
"QComboBox QAbstractItemView::item {\n"
"        height: 25px;\n"
"        color: rgb(73, 73, 73);\n"
"}\n"
"QComboBox QAbstractItemVi"
                        "ew::item:selected {\n"
"        background: rgb(232, 241, 250);\n"
"        color: rgb(2, 65, 132);\n"
"}"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 640, 101, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Times New Roman"));
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        label->setFont(font3);
        label->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(130, 150, 261, 51));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(130, 220, 261, 51));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(560, 190, 211, 71));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        pushButton_4 = new QPushButton(frame);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(950, 190, 221, 71));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        tableWidget = new QTableWidget(frame);
        if (tableWidget->columnCount() < 10)
            tableWidget->setColumnCount(10);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        if (tableWidget->rowCount() < 6)
            tableWidget->setRowCount(6);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        __qtablewidgetitem16->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(0, 0, __qtablewidgetitem16);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 281, 1302, 274));
        tableWidget->setGridStyle(Qt::CustomDashLine);
        widget = new QWidget(frame);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(130, 10, 261, 51));
        widget->setStyleSheet(QString::fromUtf8("QWidget#widget{\n"
"	border: 2px solid gray;\n"
"	border-radius: 10px\n"
"}"));
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 5, 131, 41));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy2);
        QFont font4;
        font4.setFamily(QString::fromUtf8("Arial"));
        font4.setPointSize(12);
        lineEdit->setFont(font4);
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background:transparent;\n"
"	border-width:0;\n"
"border-style:outset\n"
"}"));
        lineEdit->setFrame(true);
        lineEdit->setAlignment(Qt::AlignCenter);
        lineEdit_7 = new QLineEdit(widget);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(140, 5, 101, 41));
        sizePolicy2.setHeightForWidth(lineEdit_7->sizePolicy().hasHeightForWidth());
        lineEdit_7->setSizePolicy(sizePolicy2);
        lineEdit_7->setFont(font4);
        lineEdit_7->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background:transparent;\n"
"	border-width:0;\n"
"border-style:outset\n"
"}"));
        lineEdit_7->setFrame(true);
        lineEdit_7->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(220, 15, 72, 21));
        label_2->setFont(font4);
        widget_2 = new QWidget(frame);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(130, 80, 261, 51));
        widget_2->setStyleSheet(QString::fromUtf8("QWidget#widget_2{\n"
"	border: 2px solid gray;\n"
"	border-radius: 10px\n"
"}"));
        lineEdit_2 = new QLineEdit(widget_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(10, 5, 161, 41));
        sizePolicy2.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy2);
        lineEdit_2->setFont(font4);
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background:transparent;\n"
"	border-width:0;\n"
"border-style:outset\n"
"}"));
        lineEdit_2->setFrame(true);
        lineEdit_2->setAlignment(Qt::AlignCenter);
        lineEdit_8 = new QLineEdit(widget_2);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(150, 5, 101, 41));
        sizePolicy2.setHeightForWidth(lineEdit_8->sizePolicy().hasHeightForWidth());
        lineEdit_8->setSizePolicy(sizePolicy2);
        lineEdit_8->setFont(font4);
        lineEdit_8->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background:transparent;\n"
"	border-width:0;\n"
"border-style:outset\n"
"}"));
        lineEdit_8->setFrame(true);
        lineEdit_8->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(widget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(220, 15, 72, 21));
        label_6->setFont(font4);
        widget_3 = new QWidget(frame);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(930, 10, 261, 51));
        widget_3->setStyleSheet(QString::fromUtf8("QWidget#widget_3\n"
"{\n"
"	border: 2px solid gray;;\n"
"	border-radius: 10px\n"
"}"));
        lineEdit_5 = new QLineEdit(widget_3);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(10, 5, 121, 41));
        sizePolicy2.setHeightForWidth(lineEdit_5->sizePolicy().hasHeightForWidth());
        lineEdit_5->setSizePolicy(sizePolicy2);
        lineEdit_5->setFont(font4);
        lineEdit_5->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background:transparent;\n"
"	border-width:0;\n"
"border-style:outset\n"
"}"));
        lineEdit_5->setFrame(true);
        lineEdit_5->setAlignment(Qt::AlignCenter);
        lineEdit_9 = new QLineEdit(widget_3);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(140, 5, 101, 41));
        sizePolicy2.setHeightForWidth(lineEdit_9->sizePolicy().hasHeightForWidth());
        lineEdit_9->setSizePolicy(sizePolicy2);
        lineEdit_9->setFont(font4);
        lineEdit_9->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background:transparent;\n"
"	border-width:0;\n"
"border-style:outset\n"
"}"));
        lineEdit_9->setFrame(true);
        lineEdit_9->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(widget_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(220, 14, 72, 21));
        label_4->setFont(font4);
        pushButton_5 = new QPushButton(frame);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(480, 625, 371, 61));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_5\n"
"\n"
"{\n"
"	\n"
"	background-color: rgb(255, 190, 0);\n"
"}"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(1100, 600, 261, 91));
        widget_4 = new QWidget(frame);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(930, 80, 261, 51));
        widget_4->setStyleSheet(QString::fromUtf8("QWidget#widget_4{\n"
"	border: 2px solid gray;\n"
"	border-radius: 10px\n"
"}"));
        lineEdit_3 = new QLineEdit(widget_4);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(10, 5, 131, 41));
        sizePolicy2.setHeightForWidth(lineEdit_3->sizePolicy().hasHeightForWidth());
        lineEdit_3->setSizePolicy(sizePolicy2);
        lineEdit_3->setFont(font4);
        lineEdit_3->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background:transparent;\n"
"	border-width:0;\n"
"border-style:outset\n"
"}"));
        lineEdit_3->setFrame(true);
        lineEdit_3->setAlignment(Qt::AlignCenter);
        lineEdit_10 = new QLineEdit(widget_4);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(140, 5, 101, 41));
        sizePolicy2.setHeightForWidth(lineEdit_10->sizePolicy().hasHeightForWidth());
        lineEdit_10->setSizePolicy(sizePolicy2);
        lineEdit_10->setFont(font4);
        lineEdit_10->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background:transparent;\n"
"	border-width:0;\n"
"border-style:outset\n"
"}"));
        lineEdit_10->setFrame(true);
        lineEdit_10->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(widget_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(225, 15, 72, 21));
        label_5->setFont(font4);
        view = new QGraphicsView(frame);
        view->setObjectName(QString::fromUtf8("view"));
        view->setGeometry(QRect(610, 40, 101, 81));
        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(590, 20, 141, 141));
        label_7->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        label_7->setMargin(10);

        verticalLayout->addWidget(frame);


        horizontalLayout->addWidget(shadowWidget);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        title->setText(QCoreApplication::translate("Widget", "    \344\276\277\346\220\272\345\274\217\345\274\200\345\205\263\346\223\215\344\275\234\347\256\261\347\273\247\347\224\265\345\231\250\346\265\213\350\257\225\344\273\252", nullptr));
        btnMin->setText(QString());
        btnClose->setText(QString());
        btn_Openport->setText(QCoreApplication::translate("Widget", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\347\253\257\345\217\243\345\217\267", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "\345\274\200\345\247\213\346\265\213\350\257\225\345\212\250\344\275\234\347\224\265\345\216\213", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget", "\345\274\200\345\247\213\346\265\213\350\257\225\345\212\250\344\275\234\346\227\266\351\227\264", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Widget", "\345\201\234\346\255\242\346\265\213\350\257\225", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Widget", "\350\207\252\345\212\250\346\265\213\350\257\225", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Widget", "\351\227\264\351\232\224\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Widget", "\347\273\247\347\224\265\345\231\250\345\236\213\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Widget", "\346\225\264\345\256\232\346\227\266\351\227\264(s)", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Widget", "\346\265\213\351\207\217\346\254\241\346\225\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Widget", "\345\212\250\344\275\234\347\224\265\345\216\213\345\200\274(V)", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("Widget", "\350\277\224\345\233\236\347\224\265\345\216\213\345\200\274(V)", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("Widget", "\350\277\224\345\233\236\347\263\273\346\225\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("Widget", "\347\224\265\346\265\201\345\200\274(mA)", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("Widget", "\345\220\257\345\212\250\345\212\237\347\216\207(W)", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("Widget", "\345\212\250\344\275\234\346\227\266\351\227\264(ms)", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("Widget", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("Widget", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("Widget", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("Widget", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("Widget", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("Widget", "6", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        tableWidget->setSortingEnabled(__sortingEnabled);

        lineEdit->setText(QCoreApplication::translate("Widget", "\350\256\276\347\275\256\347\224\265\345\216\213\345\200\274:", nullptr));
        lineEdit_7->setText(QCoreApplication::translate("Widget", "100", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "V", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("Widget", "\350\256\276\347\275\256\346\255\245\350\277\233\347\224\265\345\216\213:", nullptr));
        lineEdit_8->setText(QCoreApplication::translate("Widget", "1", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "V", nullptr));
        lineEdit_5->setText(QCoreApplication::translate("Widget", "\345\275\223\345\211\215\347\224\265\346\265\201:", nullptr));
        lineEdit_9->setText(QCoreApplication::translate("Widget", "0", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "mA", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Widget", "\344\277\235\345\255\230", nullptr));
        label_3->setText(QString());
        lineEdit_3->setText(QCoreApplication::translate("Widget", "\345\275\223\345\211\215\347\224\265\345\216\213\345\200\274:", nullptr));
        lineEdit_10->setText(QCoreApplication::translate("Widget", "0", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "V", nullptr));
        label_7->setText(QCoreApplication::translate("Widget", "\346\212\245\350\255\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
