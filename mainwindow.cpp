#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //去窗口边框
    setWindowFlags(Qt::FramelessWindowHint | windowFlags());


    QPushButton *hide = ui->hideBtn;
    QPushButton *full = ui->FullBtn;
    QPushButton *close = ui->closeBtn;

    // 最小化设置
    connect(hide, &QPushButton::clicked, this, &QWidget::hide);
    // 全屏设置
    connect(full, &QPushButton::clicked, this, [=](){
        if (windowState() == Qt::WindowFullScreen) {
            setWindowState(Qt::WindowNoState);
        } else {
            setWindowState(Qt::WindowFullScreen);
        }
    });
    // 关闭设置
    connect(close, &QPushButton::clicked, this, &QWidget::close);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_hideBtn_clicked()
{

}

void MainWindow::on_FullBtn_clicked()
{

}

void MainWindow::on_closeBtn_clicked()
{

}

