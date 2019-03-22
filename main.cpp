#include "mainwindow.h"
#include <QApplication>
#include <QSet>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    QString old = QString::fromStdString("a; b; c");
    QStringList list = old.split("; ");
    QSet<QString> set = QSet<QString>::fromList(list);
    QString as = QString::fromStdString("a");
    QString bs = QString::fromStdString("b");
    QString cs = QString::fromStdString("c");
    qDebug() << as << set.contains(as);
    qDebug() << bs << set.contains(bs);
    qDebug() << cs << set.contains(cs);




    return a.exec();
}
