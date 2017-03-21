#include "mcmainwindow.h"
#include "ui_mcmainwindow.h"
#include <QMessageBox>
#include <QEvent>

MCMainWindow::MCMainWindow(QWidget *parent) :
    QStackedWidget(parent),
    ui(new Ui::MCMainWindow)
{
    ui->setupUi(this);

    setCurrentIndex(-1);
    changeToNormalMode();

//    installEventFilter(this);
}

MCMainWindow::~MCMainWindow()
{
    delete ui;
}

void MCMainWindow::changeToInClassMode()
{
    if(currentWidget() == ui->pInClassModeWgt) {
        return;
    }

    setCurrentWidget(ui->pInClassModeWgt);
    resize(ui->pInClassModeWgt->size());
}

void MCMainWindow::changeToNormalMode()
{
    if(currentWidget() == ui->pNormalModeWgt) {
        return;
    }

    setCurrentWidget(ui->pNormalModeWgt);
    resize(ui->pNormalModeWgt->size());
}

void MCMainWindow::handleMessage(const QString &)
{
//    QMessageBox::information(0, "test", "test");

//    raise();
    activateWindow();
//    setWindowFlags(windowFlags() &~ Qt::WindowStaysOnTopHint);
//    show();
}

//bool MCMainWindow::eventFilter(QObject *watched, QEvent *event)
//{
//    if(event->type() == QEvent::WindowDeactivate) {
//        activateWindow();
////        show();
//        return true;
//    }

//    return false;
//}

void MCMainWindow::adjustSize(int width, int height)
{
    resize(width, height);
}

void MCMainWindow::activateWindow()
{
    Qt::WindowStates winStatus = Qt::WindowNoState;
    if (windowState() & Qt::WindowMaximized)
    {
        winStatus = Qt::WindowMaximized;
    }
    setWindowState(Qt::WindowMinimized);
    setWindowState(Qt::WindowActive | winStatus);
//    setGeometry(curGemRect);
//    activateWindow();
    raise();
}

