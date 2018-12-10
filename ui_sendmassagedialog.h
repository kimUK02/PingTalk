/********************************************************************************
** Form generated from reading UI file 'sendmassagedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDMASSAGEDIALOG_H
#define UI_SENDMASSAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SendMassageDialog
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPlainTextEdit *chetTextEdit;
    QLineEdit *sendLine;
    QPushButton *pushButton;

    void setupUi(QDialog *SendMassageDialog)
    {
        if (SendMassageDialog->objectName().isEmpty())
            SendMassageDialog->setObjectName(QStringLiteral("SendMassageDialog"));
        SendMassageDialog->resize(265, 402);
        gridLayout_2 = new QGridLayout(SendMassageDialog);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(SendMassageDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(SendMassageDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setReadOnly(true);

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 2);

        chetTextEdit = new QPlainTextEdit(SendMassageDialog);
        chetTextEdit->setObjectName(QStringLiteral("chetTextEdit"));

        gridLayout_2->addWidget(chetTextEdit, 1, 0, 1, 2);

        sendLine = new QLineEdit(SendMassageDialog);
        sendLine->setObjectName(QStringLiteral("sendLine"));

        gridLayout_2->addWidget(sendLine, 2, 0, 1, 1);

        pushButton = new QPushButton(SendMassageDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_2->addWidget(pushButton, 2, 1, 1, 1);


        retranslateUi(SendMassageDialog);

        QMetaObject::connectSlotsByName(SendMassageDialog);
    } // setupUi

    void retranslateUi(QDialog *SendMassageDialog)
    {
        SendMassageDialog->setWindowTitle(QApplication::translate("SendMassageDialog", "Dialog", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        SendMassageDialog->setToolTip(QApplication::translate("SendMassageDialog", "<html><head>hello<head/><body><p><br/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("SendMassageDialog", "To :", Q_NULLPTR));
        pushButton->setText(QApplication::translate("SendMassageDialog", "SEND", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SendMassageDialog: public Ui_SendMassageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDMASSAGEDIALOG_H
