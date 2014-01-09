/*
 * File:   main.cpp
 * Author: user
 *
 * Created on January 7, 2014, 2:37 PM
 */

#include <QApplication>

#include "HelloForm.h"

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);

    //new form creation
    HelloForm form;
    form.show(); 

    return app.exec();
}
