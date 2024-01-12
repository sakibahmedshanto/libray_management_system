/********************************************************************************
** Form generated from reading UI file 'customer_panel.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMER_PANEL_H
#define UI_CUSTOMER_PANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_customer_panel
{
public:
    QFrame *frame_4;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *manageGenre;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_18;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *manageAuthorButton;
    QHBoxLayout *horizontalLayout_17;
    QSpacerItem *horizontalSpacer_16;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *editMemberBtn;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *deleteMemberBtn;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *membersListBtn;
    QHBoxLayout *horizontalLayout_18;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *addBookBtn;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *editBookBtn;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *deleteBookBtn;
    QHBoxLayout *horizontalLayout_14;
    QSpacerItem *horizontalSpacer_13;
    QPushButton *booksListBtn;
    QHBoxLayout *horizontalLayout_19;
    QSpacerItem *horizontalSpacer_17;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_15;
    QSpacerItem *horizontalSpacer_14;
    QPushButton *issueBookBtn;
    QHBoxLayout *horizontalLayout_16;
    QSpacerItem *horizontalSpacer_15;
    QPushButton *returnBookBtn;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_15;
    QLabel *label_2;
    QLabel *username;
    QFrame *frame_8;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_20;
    QSpacerItem *verticalSpacer_8;
    QLabel *memberNum;
    QFrame *frame_9;
    QVBoxLayout *verticalLayout_12;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_24;
    QSpacerItem *verticalSpacer_10;
    QLabel *bookNum;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_20;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_13;
    QSpacerItem *verticalSpacer_7;
    QLabel *authorNum;
    QPushButton *returnBookBtn_2;
    QPushButton *returnBookBtn_3;
    QPushButton *returnBookBtn_4;
    QFrame *frame_7;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_15;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *cover_1;
    QLabel *cover_2;
    QLabel *cover_3;
    QLabel *cover_4;
    QFrame *frame_5;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *customer_panel)
    {
        if (customer_panel->objectName().isEmpty())
            customer_panel->setObjectName("customer_panel");
        customer_panel->resize(850, 1006);
        frame_4 = new QFrame(customer_panel);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(0, 0, 851, 1011));
        frame_4->setStyleSheet(QString::fromUtf8("background-color: rgb(43, 43, 43);"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        frame = new QFrame(frame_4);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(40, 140, 192, 661));
        frame->setStyleSheet(QString::fromUtf8("background-color: #242b3c;\n"
"border-radius:8px"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_2 = new QSpacerItem(18, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("font: 63 12pt \"Comic Sans MS\";\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(label_5);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer_3 = new QSpacerItem(28, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        manageGenre = new QPushButton(frame);
        manageGenre->setObjectName("manageGenre");
        manageGenre->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 63 9pt \"Comic Sans MS\";\n"
"color: rgb(255, 255, 255);\n"
"padding : 0 8px;\n"
"background: #242b3c;\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"background:#4f85e2;\n"
"border-radius:5px;\n"
"}"));
        manageGenre->setAutoDefault(false);
        manageGenre->setFlat(true);

        horizontalLayout_5->addWidget(manageGenre);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_18 = new QSpacerItem(18, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_18);

        label_6 = new QLabel(frame);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("font: 63 12pt \"Comic Sans MS\";\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(label_6);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalSpacer_4 = new QSpacerItem(28, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        manageAuthorButton = new QPushButton(frame);
        manageAuthorButton->setObjectName("manageAuthorButton");
        manageAuthorButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 63 9pt \"Comic Sans MS\";\n"
"color: rgb(255, 255, 255);\n"
"padding : 0 8px;\n"
"background: #242b3c;\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"background:#4f85e2;\n"
"border-radius:5px;\n"
"}"));
        manageAuthorButton->setAutoDefault(false);
        manageAuthorButton->setFlat(true);

        horizontalLayout_6->addWidget(manageAuthorButton);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        horizontalSpacer_16 = new QSpacerItem(18, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_16);

        label_7 = new QLabel(frame);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("font: 63 12pt \"Comic Sans MS\";\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_17->addWidget(label_7);


        verticalLayout->addLayout(horizontalLayout_17);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalSpacer_6 = new QSpacerItem(28, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);

        editMemberBtn = new QPushButton(frame);
        editMemberBtn->setObjectName("editMemberBtn");
        editMemberBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 63 9pt \"Comic Sans MS\";\n"
"color: rgb(255, 255, 255);\n"
"padding : 0 8px;\n"
"background: #242b3c;\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"background:#4f85e2;\n"
"border-radius:5px;\n"
"}"));
        editMemberBtn->setAutoDefault(false);
        editMemberBtn->setFlat(true);

        horizontalLayout_8->addWidget(editMemberBtn);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalSpacer_7 = new QSpacerItem(28, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_7);

        deleteMemberBtn = new QPushButton(frame);
        deleteMemberBtn->setObjectName("deleteMemberBtn");
        deleteMemberBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 63 9pt \"Comic Sans MS\";\n"
"color: rgb(255, 255, 255);\n"
"padding : 0 8px;\n"
"background: #242b3c;\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"background:#4f85e2;\n"
"border-radius:5px;\n"
"}"));
        deleteMemberBtn->setAutoDefault(false);
        deleteMemberBtn->setFlat(true);

        horizontalLayout_9->addWidget(deleteMemberBtn);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalSpacer_8 = new QSpacerItem(28, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_8);

        membersListBtn = new QPushButton(frame);
        membersListBtn->setObjectName("membersListBtn");
        membersListBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 63 9pt \"Comic Sans MS\";\n"
"color: rgb(255, 255, 255);\n"
"padding : 0 8px;\n"
"background: #242b3c;\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"background:#4f85e2;\n"
"border-radius:5px;\n"
"}"));
        membersListBtn->setAutoDefault(false);
        membersListBtn->setFlat(true);

        horizontalLayout_10->addWidget(membersListBtn);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        horizontalSpacer_11 = new QSpacerItem(18, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_11);

        label_8 = new QLabel(frame);
        label_8->setObjectName("label_8");
        label_8->setStyleSheet(QString::fromUtf8("font: 63 12pt \"Comic Sans MS\";\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_18->addWidget(label_8);


        verticalLayout->addLayout(horizontalLayout_18);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalSpacer_9 = new QSpacerItem(28, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_9);

        addBookBtn = new QPushButton(frame);
        addBookBtn->setObjectName("addBookBtn");
        addBookBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 63 9pt \"Comic Sans MS\";\n"
"color: rgb(255, 255, 255);\n"
"padding : 0 8px;\n"
"background: #242b3c;\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"background:#4f85e2;\n"
"border-radius:5px;\n"
"}"));
        addBookBtn->setAutoDefault(false);
        addBookBtn->setFlat(true);

        horizontalLayout_11->addWidget(addBookBtn);


        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        horizontalSpacer_10 = new QSpacerItem(28, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_10);

        editBookBtn = new QPushButton(frame);
        editBookBtn->setObjectName("editBookBtn");
        editBookBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 63 9pt \"Comic Sans MS\";\n"
"color: rgb(255, 255, 255);\n"
"padding : 0 8px;\n"
"background: #242b3c;\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"background:#4f85e2;\n"
"border-radius:5px;\n"
"}"));
        editBookBtn->setAutoDefault(false);
        editBookBtn->setFlat(true);

        horizontalLayout_12->addWidget(editBookBtn);


        verticalLayout->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        horizontalSpacer_12 = new QSpacerItem(28, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_12);

        deleteBookBtn = new QPushButton(frame);
        deleteBookBtn->setObjectName("deleteBookBtn");
        deleteBookBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 63 9pt \"Comic Sans MS\";\n"
"color: rgb(255, 255, 255);\n"
"padding : 0 8px;\n"
"background: #242b3c;\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"background:#4f85e2;\n"
"border-radius:5px;\n"
"}"));
        deleteBookBtn->setAutoDefault(false);
        deleteBookBtn->setFlat(true);

        horizontalLayout_13->addWidget(deleteBookBtn);


        verticalLayout->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        horizontalSpacer_13 = new QSpacerItem(28, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_13);

        booksListBtn = new QPushButton(frame);
        booksListBtn->setObjectName("booksListBtn");
        booksListBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 63 9pt \"Comic Sans MS\";\n"
"color: rgb(255, 255, 255);\n"
"padding : 0 8px;\n"
"background: #242b3c;\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"background:#4f85e2;\n"
"border-radius:5px;\n"
"}"));
        booksListBtn->setAutoDefault(false);
        booksListBtn->setFlat(true);

        horizontalLayout_14->addWidget(booksListBtn);


        verticalLayout->addLayout(horizontalLayout_14);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        horizontalSpacer_17 = new QSpacerItem(18, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_17);

        label_9 = new QLabel(frame);
        label_9->setObjectName("label_9");
        label_9->setStyleSheet(QString::fromUtf8("font: 63 12pt \"Comic Sans MS\";\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_19->addWidget(label_9);


        verticalLayout->addLayout(horizontalLayout_19);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        horizontalSpacer_14 = new QSpacerItem(28, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_14);

        issueBookBtn = new QPushButton(frame);
        issueBookBtn->setObjectName("issueBookBtn");
        issueBookBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 63 9pt \"Comic Sans MS\";\n"
"color: rgb(255, 255, 255);\n"
"padding : 0 8px;\n"
"background: #242b3c;\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"background:#4f85e2;\n"
"border-radius:5px;\n"
"}"));
        issueBookBtn->setAutoDefault(false);
        issueBookBtn->setFlat(true);

        horizontalLayout_15->addWidget(issueBookBtn);


        verticalLayout->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        horizontalSpacer_15 = new QSpacerItem(28, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_15);

        returnBookBtn = new QPushButton(frame);
        returnBookBtn->setObjectName("returnBookBtn");
        returnBookBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 63 9pt \"Comic Sans MS\";\n"
"color: rgb(255, 255, 255);\n"
"padding : 0 8px;\n"
"background: #242b3c;\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"background:#4f85e2;\n"
"border-radius:5px;\n"
"}"));
        returnBookBtn->setAutoDefault(false);
        returnBookBtn->setFlat(true);

        horizontalLayout_16->addWidget(returnBookBtn);


        verticalLayout->addLayout(horizontalLayout_16);

        frame_2 = new QFrame(frame_4);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(20, 30, 811, 81));
        frame_2->setStyleSheet(QString::fromUtf8("background: #ffffff;\n"
"border-radius: 8px;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_15 = new QVBoxLayout(frame_2);
        verticalLayout_15->setObjectName("verticalLayout_15");
        label_2 = new QLabel(frame_2);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(4, 0, 133);\n"
"font: 15pt \"Lato\";"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_15->addWidget(label_2);

        username = new QLabel(frame_2);
        username->setObjectName("username");
        username->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 13pt \"Lato\";"));
        username->setAlignment(Qt::AlignCenter);

        verticalLayout_15->addWidget(username);

        frame_8 = new QFrame(frame_4);
        frame_8->setObjectName("frame_8");
        frame_8->setGeometry(QRect(330, 390, 161, 161));
        frame_8->setStyleSheet(QString::fromUtf8("background-color: #3366FF;\n"
"border-radius: 8px;"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        verticalLayout_9 = new QVBoxLayout(frame_8);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        label_20 = new QLabel(frame_8);
        label_20->setObjectName("label_20");
        label_20->setStyleSheet(QString::fromUtf8("font: 63 18pt \"Comic Sans MS\";\n"
"color: rgb(255, 255, 255);\n"
"font-weight: bold;"));
        label_20->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_20);

        verticalSpacer_8 = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_8->addItem(verticalSpacer_8);

        memberNum = new QLabel(frame_8);
        memberNum->setObjectName("memberNum");
        memberNum->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 63 24pt \"Comic Sans MS\";\n"
""));
        memberNum->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(memberNum);


        verticalLayout_9->addLayout(verticalLayout_8);

        frame_9 = new QFrame(frame_4);
        frame_9->setObjectName("frame_9");
        frame_9->setGeometry(QRect(570, 290, 231, 171));
        frame_9->setStyleSheet(QString::fromUtf8("background-color: #3366FF;\n"
"border-radius: 8px;"));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        verticalLayout_12 = new QVBoxLayout(frame_9);
        verticalLayout_12->setObjectName("verticalLayout_12");
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName("verticalLayout_13");
        label_24 = new QLabel(frame_9);
        label_24->setObjectName("label_24");
        label_24->setStyleSheet(QString::fromUtf8("font: 63 18pt \"Comic Sans MS\";\n"
"color: rgb(255, 255, 255);\n"
"font-weight: bold;"));
        label_24->setAlignment(Qt::AlignCenter);

        verticalLayout_13->addWidget(label_24);

        verticalSpacer_10 = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_13->addItem(verticalSpacer_10);

        bookNum = new QLabel(frame_9);
        bookNum->setObjectName("bookNum");
        bookNum->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 63 24pt \"Comic Sans MS\";\n"
""));
        bookNum->setAlignment(Qt::AlignCenter);

        verticalLayout_13->addWidget(bookNum);


        verticalLayout_12->addLayout(verticalLayout_13);

        frame_6 = new QFrame(frame_4);
        frame_6->setObjectName("frame_6");
        frame_6->setGeometry(QRect(510, 460, 81, 271));
        frame_6->setStyleSheet(QString::fromUtf8("background-color: #3366FF;\n"
"border-radius: 8px;"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        horizontalLayout_20 = new QHBoxLayout(frame_6);
        horizontalLayout_20->setObjectName("horizontalLayout_20");
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        label_13 = new QLabel(frame_6);
        label_13->setObjectName("label_13");
        label_13->setStyleSheet(QString::fromUtf8("font: 63 18pt \"Comic Sans MS\";\n"
"color: rgb(255, 255, 255);\n"
"font-weight: bold;"));
        label_13->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_13);

        verticalSpacer_7 = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_7->addItem(verticalSpacer_7);

        authorNum = new QLabel(frame_6);
        authorNum->setObjectName("authorNum");
        authorNum->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 63 24pt \"Comic Sans MS\";\n"
""));
        authorNum->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(authorNum);


        horizontalLayout_20->addLayout(verticalLayout_7);

        returnBookBtn_2 = new QPushButton(frame_4);
        returnBookBtn_2->setObjectName("returnBookBtn_2");
        returnBookBtn_2->setGeometry(QRect(240, 740, 181, 41));
        returnBookBtn_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:15px;\n"
"padding : 0 4px;\n"
"background: #000000;\n"
"border -radius:10px;\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Lato\";\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"border-radius:5px;\n"
"background:#ababab;\n"
"}\n"
""));
        returnBookBtn_2->setAutoDefault(false);
        returnBookBtn_2->setFlat(true);
        returnBookBtn_3 = new QPushButton(frame_4);
        returnBookBtn_3->setObjectName("returnBookBtn_3");
        returnBookBtn_3->setGeometry(QRect(610, 740, 181, 41));
        returnBookBtn_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:15px;\n"
"padding : 0 4px;\n"
"background: #000000;\n"
"border -radius:10px;\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Lato\";\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"border-radius:5px;\n"
"background:#ababab;\n"
"}\n"
""));
        returnBookBtn_3->setAutoDefault(false);
        returnBookBtn_3->setFlat(true);
        returnBookBtn_4 = new QPushButton(frame_4);
        returnBookBtn_4->setObjectName("returnBookBtn_4");
        returnBookBtn_4->setGeometry(QRect(620, 660, 181, 41));
        returnBookBtn_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:15px;\n"
"padding : 0 4px;\n"
"background: #000000;\n"
"border -radius:10px;\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Lato\";\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"border-radius:5px;\n"
"background:#ababab;\n"
"}\n"
""));
        returnBookBtn_4->setAutoDefault(false);
        returnBookBtn_4->setFlat(true);
        frame_7 = new QFrame(frame_4);
        frame_7->setObjectName("frame_7");
        frame_7->setGeometry(QRect(210, 810, 551, 199));
        frame_7->setStyleSheet(QString::fromUtf8("background-color: #3366FF;\n"
"border-radius: 8px;"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_7);
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_15 = new QLabel(frame_7);
        label_15->setObjectName("label_15");
        label_15->setStyleSheet(QString::fromUtf8("font: 63 18pt \"Comic Sans MS\";\n"
"color: rgb(255, 255, 255);\n"
"font-weight: bold;"));
        label_15->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_15);

        verticalSpacer_6 = new QSpacerItem(20, 38, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_5->addItem(verticalSpacer_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        cover_1 = new QLabel(frame_7);
        cover_1->setObjectName("cover_1");

        horizontalLayout_2->addWidget(cover_1);

        cover_2 = new QLabel(frame_7);
        cover_2->setObjectName("cover_2");

        horizontalLayout_2->addWidget(cover_2);

        cover_3 = new QLabel(frame_7);
        cover_3->setObjectName("cover_3");

        horizontalLayout_2->addWidget(cover_3);

        cover_4 = new QLabel(frame_7);
        cover_4->setObjectName("cover_4");

        horizontalLayout_2->addWidget(cover_4);


        verticalLayout_5->addLayout(horizontalLayout_2);

        frame_5 = new QFrame(frame_4);
        frame_5->setObjectName("frame_5");
        frame_5->setGeometry(QRect(260, 150, 521, 91));
        frame_5->setStyleSheet(QString::fromUtf8("background: #000d57;\n"
"border-radius: 8px;"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(frame_5);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 30, 501, 20));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 15pt \"Lato\";"));
        label_4 = new QLabel(frame_5);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(410, 60, 101, 20));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 8pt \"Lato\";"));

        retranslateUi(customer_panel);

        manageGenre->setDefault(false);
        manageAuthorButton->setDefault(false);
        editMemberBtn->setDefault(false);
        deleteMemberBtn->setDefault(false);
        membersListBtn->setDefault(false);
        addBookBtn->setDefault(false);
        editBookBtn->setDefault(false);
        deleteBookBtn->setDefault(false);
        booksListBtn->setDefault(false);
        issueBookBtn->setDefault(false);
        returnBookBtn->setDefault(false);
        returnBookBtn_2->setDefault(false);
        returnBookBtn_3->setDefault(false);
        returnBookBtn_4->setDefault(false);


        QMetaObject::connectSlotsByName(customer_panel);
    } // setupUi

    void retranslateUi(QDialog *customer_panel)
    {
        customer_panel->setWindowTitle(QCoreApplication::translate("customer_panel", "Dialog", nullptr));
        label_5->setText(QCoreApplication::translate("customer_panel", "Genres", nullptr));
        manageGenre->setText(QCoreApplication::translate("customer_panel", "Manage Genres", nullptr));
        label_6->setText(QCoreApplication::translate("customer_panel", "Authors", nullptr));
        manageAuthorButton->setText(QCoreApplication::translate("customer_panel", "Manage Authors", nullptr));
        label_7->setText(QCoreApplication::translate("customer_panel", "Members", nullptr));
        editMemberBtn->setText(QCoreApplication::translate("customer_panel", "Edit Member", nullptr));
        deleteMemberBtn->setText(QCoreApplication::translate("customer_panel", "Delete Member", nullptr));
        membersListBtn->setText(QCoreApplication::translate("customer_panel", "Members List", nullptr));
        label_8->setText(QCoreApplication::translate("customer_panel", "Books", nullptr));
        addBookBtn->setText(QCoreApplication::translate("customer_panel", "Add Book", nullptr));
        editBookBtn->setText(QCoreApplication::translate("customer_panel", "Edit Book", nullptr));
        deleteBookBtn->setText(QCoreApplication::translate("customer_panel", "Delete Book", nullptr));
        booksListBtn->setText(QCoreApplication::translate("customer_panel", "Books List", nullptr));
        label_9->setText(QCoreApplication::translate("customer_panel", "Circulation", nullptr));
        issueBookBtn->setText(QCoreApplication::translate("customer_panel", "Issue Book", nullptr));
        returnBookBtn->setText(QCoreApplication::translate("customer_panel", "Return Book", nullptr));
        label_2->setText(QCoreApplication::translate("customer_panel", "Welcome Back!", nullptr));
        username->setText(QCoreApplication::translate("customer_panel", "[+username]", nullptr));
        label_20->setText(QCoreApplication::translate("customer_panel", "Members", nullptr));
        memberNum->setText(QCoreApplication::translate("customer_panel", "22", nullptr));
        label_24->setText(QCoreApplication::translate("customer_panel", "Books", nullptr));
        bookNum->setText(QCoreApplication::translate("customer_panel", "50", nullptr));
        label_13->setText(QCoreApplication::translate("customer_panel", "Authors", nullptr));
        authorNum->setText(QCoreApplication::translate("customer_panel", "7", nullptr));
        returnBookBtn_2->setText(QCoreApplication::translate("customer_panel", "Contact Us", nullptr));
        returnBookBtn_3->setText(QCoreApplication::translate("customer_panel", "About BookHaven", nullptr));
        returnBookBtn_4->setText(QCoreApplication::translate("customer_panel", "Sign Out", nullptr));
        label_15->setText(QCoreApplication::translate("customer_panel", "Latest Book Added", nullptr));
        cover_1->setText(QString());
        cover_2->setText(QString());
        cover_3->setText(QString());
        cover_4->setText(QString());
        label_3->setText(QCoreApplication::translate("customer_panel", "\342\200\234Books are the mirrors of the soul.\342\200\235", nullptr));
        label_4->setText(QCoreApplication::translate("customer_panel", "\342\200\225 Virginia Woolf", nullptr));
    } // retranslateUi

};

namespace Ui {
    class customer_panel: public Ui_customer_panel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMER_PANEL_H
