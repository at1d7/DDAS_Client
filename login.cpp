#include "login.h"
#include "ui_login.h"


Login::Login(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);

    // 去主窗口边框
    setWindowFlags(Qt::FramelessWindowHint | windowFlags());
    // 去提示框边框
    m_usname_empty->setWindowFlags(Qt::FramelessWindowHint | windowFlags());
    m_passwd_empty->setWindowFlags(Qt::FramelessWindowHint | windowFlags());
    m_amongus_error->setWindowFlags(Qt::FramelessWindowHint | windowFlags());


    //logo设置
    QPixmap logo_t, logo;
    logo_t.load(":/Icons_00/ICONS_00/LOGO_T.png");
    logo.load(":/Icons_00/ICONS_00/LOGO.PNG");


    //logo 大小和缩放
    ui->Logo->setMaximumSize(300, 300);
    ui->Logo->setMinimumSize(50, 50);
    ui->Logo->setScaledContents(true);

    //logo 居中设置
    ui->Logo->setAlignment(Qt::AlignCenter);

    //设置Logo的QPixMap
    ui->Logo->setPixmap(logo);

    // 隐藏、大窗口、关闭按钮大小设置
    ui->hideBtn->setFixedSize(30, 20);
    ui->closeBtn->setFixedSize(30,20);

    // 最小化设置
    connect(ui->hideBtn, &QPushButton::clicked, this, &QWidget::hide);
    // 关闭设置
    connect(ui->closeBtn, &QPushButton::clicked, this, &QWidget::close);

    // 登录和取消按钮设置
    connect(ui->loginBtn, &QPushButton::clicked, this, &Login::on_loginBtn_clicked);
    connect(ui->cancelBtn, &QPushButton::clicked, this, &Login::on_cancelBtn_clicked);

    // 创建系统托盘程序图标，并设置其菜单
    QSystemTrayIcon *trayIcon = new QSystemTrayIcon(this);
    QIcon icon(":/Icons_00/ICONS_00/LOGO.PNG");
    trayIcon->setIcon(icon);
    trayIcon->show();

    // 用户名、密码输入
    connect(ui->username, &QLineEdit::textChanged, this, &Login::on_username_changed);
    connect(ui->password, &QLineEdit::textChanged, this, &Login::on_password_changed);
    s_username = ui->username->text();
    s_password = ui->password->text();

    // 定时关闭提示框
    QTimer::singleShot(2000, m_usname_empty, SLOT(accept()));
    QTimer::singleShot(2000, m_passwd_empty, SLOT(accept()));
    QTimer::singleShot(2000, m_amongus_error, SLOT(accept()));

    // 忘记密码
    connect(ui->forgetBtn, &QPushButton::clicked, this, &Login::on_forgetBtn_clicked);
    m_forget->setWindowTitle("NO NO NO");
    m_forget->setWindowIcon(logo);
}

Login::~Login()
{
    delete ui;
}


void Login::on_hideBtn_clicked()
{
    // 最小化
}
void Login::on_closeBtn_clicked()
{
    // 关闭
}

void Login::on_username_changed(const QString &un)
{
    // 将输入的用户名赋值给Enter_username
    ui->username->setToolTip("认真输入你的用户名哦~");
    s_username = un;

    // 判断是否符合要求
    if(s_username.isEmpty()){
        qDebug() << "username empty";
    }else if(un == "admin"){
        status_username = true;
    }
}
void Login::on_password_changed(const QString &pw)
{
    // 将输入的密码赋值给Enter_password
    ui->password->setToolTip("我不会偷看的咧￣ω￣=");
    s_password = pw;

    // 判断是否符合要求
    if(s_password.isEmpty()){
        qDebug() << "password empty";
    }else if(pw == "123"){
        status_password = true;
    }
}

void Login::on_loginBtn_clicked()
{
    // 登录
    // 判断输入是否合法
    /*测试状态 #if 0——————>启用状态 #if 1*/
#if 0
    if(s_username.isEmpty()){
        if(n % 2 == 1)
            m_usname_empty->exec();
        qDebug() << "username empty";
    }else if(s_password.isEmpty()){
        if(n % 2 == 1)
            m_passwd_empty->exec();
    }else if(status_username == true && status_password == true){
        if(!main){
            main = new MainWindow(this);
        }
        QWidget::close();
        main->show();
    }
    else{
        if(n % 2 == 1)
            m_amongus_error->exec();
    }
    n++;
#endif
#if 1
    // 测试通道
    if(!main){
        main = new MainWindow(this);
    }
    QWidget::close();
    main->show();
#endif
}
void Login::on_cancelBtn_clicked()
{
    // 取消
    qDebug() << "Cancel button clicked.";
    QWidget::close();
}

void Login::on_forgetBtn_clicked()
{
    if(n % 2 == 1)
        m_forget->exec();
    n++;
}

