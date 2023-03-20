#include "mainwindow.h"

#include <QApplication>
#include <QHostAddress>
#include <QSqlTableModel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QSqlTableModel sql_; // Class object QSqlTableModel from module Sql
    QHostAddress tcp; // Class object QHostAddress from module Network
    w.show();
    return a.exec();
}
