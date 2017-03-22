#include "mcmainwindow.h"

#include <QApplication>
#include <qtsingleapplication.h>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QtSingleApplication a(argc, argv);
    if(a.isRunning()) {
//        QMessageBox::information(0, QObject::tr("教师客户端"), QObject::tr("已有一个程序实例在运行!"));
        a.sendMessage("raise_window_noop");
        return 0;
    }

    MCMainWindow w;
    w.show();

    a.setActivationWindow(&w, false);
    QObject::connect(&a, SIGNAL(messageReceived(const QString&)), &w, SLOT(handleMessage(const QString&)));


    return a.exec();
}
