#include "mcmainwindow.h"
#include "ui_mcmainwindow.h"
#include <messagehandlermanager.h>
#include <mooncalendarguimessagehandler.h>
#include <QMessageBox>
#include <QEvent>

#include <QDebug>

class MCMainWindowPrivate {
    friend class MCMainWindow;
    ns_xd_msg::MoonCalendarGuiMessageHandler *pGuiMessageHandler = Q_NULLPTR;
};

MCMainWindow::MCMainWindow(QWidget *parent) :
    QStackedWidget(parent),
    ui(new Ui::MCMainWindow),
    m_pData(new MCMainWindowPrivate)
{
    ui->setupUi(this);

    setCurrentIndex(-1);
    changeToNormalMode();

    registerMessageHandler();
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

void MCMainWindow::testSignalSlot()
{
    qDebug() << "testSignal complete";
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

void MCMainWindow::registerMessageHandler()
{
    ns_xd_msg::MessageHandlerManager *pMsgManager = ns_xd_msg::MessageHandlerManager::getInstance();
    m_pData->pGuiMessageHandler = dynamic_cast<ns_xd_msg::MoonCalendarGuiMessageHandler*>(pMsgManager->getMessageHandler(ns_xd_msg::MsgHdrType::MoonCalendarGui));
    connect(m_pData->pGuiMessageHandler, &ns_xd_msg::MoonCalendarGuiMessageHandler::testSignal, this, &MCMainWindow::testSignalSlot);
}


void MCMainWindow::on_pushButton_clicked()
{
    emit m_pData->pGuiMessageHandler->testSignal();
}
