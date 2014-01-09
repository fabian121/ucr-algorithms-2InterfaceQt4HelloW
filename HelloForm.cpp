/*
 * File:   HelloForm.cpp
 * Author: user
 *
 * Created on January 7, 2014, 2:41 PM
 */

#include "HelloForm.h"

HelloForm::HelloForm() {
    widget.setupUi(this);
    
    //NOW I have to connect the slot with its signal
    connect(widget.nameEdit, SIGNAL(textChanged(const QString&)), this, SLOT(textChanged(const QString&)));
}

HelloForm::~HelloForm() {
}

//definition of this slot
void HelloForm::textChanged(const QString& text){
    if(text.trimmed().length() > 0){
        widget.helloEdit->setText("Hello " + text.trimmed() + "!");
    }
    else{
        widget.helloEdit->clear();
    }
}
