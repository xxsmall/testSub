#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_pushButton_clicked()
{
    ui->pushButton->setText("ok");
    func* obj = new func();
    QString str = ui->pushButton->text();
    str = obj->strToNwidth(6,"left",str);
    ui->pushButton->setText(str);
}
