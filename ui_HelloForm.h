/********************************************************************************
** Form generated from reading UI file 'HelloForm.ui'
**
** Created: Tue Jan 7 15:09:10 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELLOFORM_H
#define UI_HELLOFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_HelloForm
{
public:
    QLineEdit *nameEdit;
    QLabel *lblTitle;
    QLineEdit *helloEdit;

    void setupUi(QDialog *HelloForm)
    {
        if (HelloForm->objectName().isEmpty())
            HelloForm->setObjectName(QString::fromUtf8("HelloForm"));
        nameEdit = new QLineEdit(HelloForm);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        nameEdit->setGeometry(QRect(20, 60, 331, 27));
        lblTitle = new QLabel(HelloForm);
        lblTitle->setObjectName(QString::fromUtf8("lblTitle"));
        lblTitle->setGeometry(QRect(30, 30, 171, 17));
        helloEdit = new QLineEdit(HelloForm);
        helloEdit->setObjectName(QString::fromUtf8("helloEdit"));
        helloEdit->setGeometry(QRect(20, 100, 331, 27));

        retranslateUi(HelloForm);

        QMetaObject::connectSlotsByName(HelloForm);
    } // setupUi

    void retranslateUi(QDialog *HelloForm)
    {
        HelloForm->setWindowTitle(QApplication::translate("HelloForm", "HelloForm", 0, QApplication::UnicodeUTF8));
        lblTitle->setText(QApplication::translate("HelloForm", "Enter your name below:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class HelloForm: public Ui_HelloForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLOFORM_H
