#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QHeaderView>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QTableWidget* m_pTableWidget = ui->tableWidget;
    QTableWidgetItem *a = new QTableWidgetItem(tr("a"));
    a->setFlags(a->flags() & ~Qt::ItemIsEditable);
    QTableWidgetItem *b = new QTableWidgetItem(tr("b"));
    qDebug() << tr("set table");

    m_pTableWidget->setRowCount(2);
    m_pTableWidget->setColumnCount(1);
    m_TableHeader<<"#"<<"Name"<<"Text";
    m_pTableWidget->setItem(0,0, a);
    m_pTableWidget->setItem(1,0, b);
    m_pTableWidget->item(1,0)->setBackground(Qt::darkGray);


}

MainWindow::~MainWindow()
{
    delete ui;
}
