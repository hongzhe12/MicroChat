#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qdebug.h>
#include <QTextBrowser>
#include <QLabel>
#include "ui_mainwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void receive_histroy(); // 接收历史消息


private slots:
    void on_lstFriends_currentRowChanged(int currentRow);

    void on_btnDebug_clicked();

    void on_btnAddFriend_clicked();

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
