#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStyle>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->obj_psh_btn_page1->setProperty("pagematches", true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_obj_tab_wdgt_pages_currentChanged(int index)
{
    // Set all buttons to false
    ui->obj_psh_btn_page1->setProperty("pagematches", false);
    ui->obj_psh_btn_page2->setProperty("pagematches", false);
    ui->obj_psh_btn_page3->setProperty("pagematches", false);
    // Set one of the buttons to true
    if (index == 0)
    ui->obj_psh_btn_page1->setProperty("pagematches", true);
    else if (index == 1)
    ui->obj_psh_btn_page2->setProperty("pagematches", true);
    else
    ui->obj_psh_btn_page3->setProperty("pagematches", true);
    // Update buttons style
    ui->obj_psh_btn_page1->style()->polish(ui->obj_psh_btn_page1);
    ui->obj_psh_btn_page2->style()->polish(ui->obj_psh_btn_page2);
    ui->obj_psh_btn_page3->style()->polish(ui->obj_psh_btn_page3);
}
