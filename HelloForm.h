/* 
 * File:   HelloForm.h
 * Author: user
 *
 * Created on January 7, 2014, 2:41 PM
 */

#ifndef _HELLOFORM_H
#define	_HELLOFORM_H

#include "ui_HelloForm.h"

class HelloForm : public QDialog {
    Q_OBJECT
public:
    HelloForm();
    virtual ~HelloForm();
    
    
    //***************************************
    //SLOTS they are like methods that will be connected with signals
    public slots:
        void textChanged(const QString& text);
    
private:
    Ui::HelloForm widget;
};

#endif	/* _HELLOFORM_H */
