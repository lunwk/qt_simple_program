// Copyright (c) 2017 sensetime.com, Inc. All Rights Reserved
// @file main.cpp
// @author liangbojun@sensetime.com
// @date 2017/01/01 01:03:48
// @version $Revision$
// @brief 

#include <QtCore/QCoreApplication>
#include <QtCore/QDebug>

int main(int argc, char** argv)
{
    QCoreApplication app(argc, argv);
    qDebug() << "hello qt!";
    app.exec();
}

/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
