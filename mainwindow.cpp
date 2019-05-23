#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_BT_1_clicked()
{
    ui->cajatexto->setText(Aumentar);
    cuenta ++;
    ui->etiqueta->setText(QString::number(cuenta));
}

void MainWindow::on_BT_2_clicked()
{
    ui->cajatexto->setText(Disminuir);
    cuenta --;
    ui->etiqueta->setText(QString::number(cuenta));
}
void MainWindow::on_etiqueta_linkActivated(const QString &link)
{

}
