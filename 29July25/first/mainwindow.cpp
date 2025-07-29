#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//    QT_SetColorPushBtn(ui->obj_psh_btn_start_dct);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::QT_SetColorPushBtn(QPushButton *button)
{
    if (!button) return;

    button->setCheckable(true);
    button->setAutoExclusive(true);

    static const QString styleSheet = R"(
        QPushBut    ton {
            border: 1px solid #6593cf;
            border-radius: 2px;
            padding: 5px 15px 2px 5px;
            background: qlineargradient(x1:0, y1:0, x2:0, y2:1,
                stop:0.0 #f5f9ff,
                stop:0.5 #c7dfff,
                stop:0.55 #afd2ff,
                stop:1.0 #c0dbff);
            color: #006aff;
            font: bold large "Arial";
            height: 30px;
        }

        QPushButton:hover {
            background: qlineargradient(x1:0, y1:0, x2:0, y2:1,
                stop:0.0 #ffd9aa,
                stop:0.5 #ffbb6e,
                stop:0.55 #feae42,
                stop:1.0 #fedb74);
        }

        QPushButton:pressed {
            background: qlineargradient(x1:0, y1:0, x2:0, y2:1,
                stop:0.0 #c0dbff,
                stop:0.5 #cfd26f,
                stop:0.55 #c7df6f,
                stop:1.0 #f5f9ff);
            padding-top: 2px;
            padding-left: 3px;
        }

        QPushButton:on {
            background: qlineargradient(x1:0, y1:0, x2:0, y2:1,
                stop:0.0 #5AA72D,
                stop:0.5 #B3E296,
                stop:0.55 #B3E296,
                stop:1.0 #f5f9ff);
            padding-top: 2px;
            padding-left: 3px;
        }

        QPushButton:disabled {
            background: transparent #e5e9ee;
            padding-top: 2px;
            padding-left: 3px;
            color: black;
        }
    )";

    button->setStyleSheet(styleSheet);
}
