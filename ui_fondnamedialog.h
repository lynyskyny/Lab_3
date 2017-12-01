/********************************************************************************
** Form generated from reading UI file 'fondnamedialog.ui'
**
** Created: Fri 24. Nov 15:22:13 2017
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FONDNAMEDIALOG_H
#define UI_FONDNAMEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FondNameDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *FondNameDialog)
    {
        if (FondNameDialog->objectName().isEmpty())
            FondNameDialog->setObjectName(QString::fromUtf8("FondNameDialog"));
        FondNameDialog->resize(365, 106);
        horizontalLayout = new QHBoxLayout(FondNameDialog);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(FondNameDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        lineEdit = new QLineEdit(FondNameDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(FondNameDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(FondNameDialog);

        QMetaObject::connectSlotsByName(FondNameDialog);
    } // setupUi

    void retranslateUi(QDialog *FondNameDialog)
    {
        FondNameDialog->setWindowTitle(QApplication::translate("FondNameDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("FondNameDialog", "Enter fond name:", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("FondNameDialog", "Count", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FondNameDialog: public Ui_FondNameDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FONDNAMEDIALOG_H
