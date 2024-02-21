#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QDialogButtonBox>
#include <QPointer>
#include <QMainWindow>
#include <QLabel>
#include <QPixmap>
#include <QSystemTrayIcon>
#include <QMessageBox>
#include <QStatusBar>
#include <QTimer>
#include "mainwindow.h"


namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT

public:
    Login(QWidget *parent = nullptr);



    ~Login();

signals:


private:
    MainWindow *main = new MainWindow;

    bool status_username = false;
    bool status_password = false;

    QString s_username;
    QString s_password;
    int n = 0;


    QMessageBox *m_usname_empty = new QMessageBox(QMessageBox::Information, QString(""), QString("用户名忘输啦"));
    QMessageBox *m_passwd_empty = new QMessageBox(QMessageBox::Information, QString(""), QString("密码忘输啦"));
    QMessageBox *m_amongus_error = new QMessageBox(QMessageBox::Information, QString(""), QString("用户名或者密码错啦"));
    QMessageBox *m_forget = new QMessageBox(QMessageBox::Information, QString(""), QString("忘了？好好想想，暂时没办法恢复哦"));



private slots:

    // 最小化、关闭
    void on_hideBtn_clicked();
    void on_closeBtn_clicked();

    // 登录、取消
    void on_loginBtn_clicked();
    void on_cancelBtn_clicked();

    // 用户名、密码
    // 管理员admin，密码123
    void on_username_changed(const QString &un);
    void on_password_changed(const QString &pw);


    void on_forgetBtn_clicked();

private:
    Ui::Login *ui;
};

#endif // LOGIN_H
