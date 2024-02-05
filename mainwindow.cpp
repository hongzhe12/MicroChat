#include "mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    ui->lstFriends->addItem(new QListWidgetItem(QIcon(), "测试好友1"));
    ui->lstFriends->addItem(new QListWidgetItem(QIcon(), "测试好友2"));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::receive_histroy()
{

}


void MainWindow::on_lstFriends_currentRowChanged(int currentRow)
{
    ui->stackChat->setCurrentIndex(currentRow); // 设置stackwidget为当前页码
//    qDebug() << "Current Page is:  " << ui->stackChat->currentIndex();
}

/*
void MainWindow::on_btnDebug_clicked()
{
    int currentIndex = ui->stackChat->currentIndex();
    QWidget* currentWidget = ui->stackChat->currentWidget();
    QTextBrowser* tmpChatArea = currentWidget->findChild<QTextBrowser*>(QString("chatArea%1").arg(currentIndex));
    tmpChatArea->append("我是新消息");
}
*/
void MainWindow::on_btnAddFriend_clicked()
{
    //添加好友或群聊
}
