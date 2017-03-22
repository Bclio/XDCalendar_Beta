#ifndef XDSOFT_MCMAINWINDOW_H
#define XDSOFT_MCMAINWINDOW_H

#include <QStackedWidget>

namespace Ui {
class MCMainWindow;
}

//namespace ns_xd_msg {
//class MoonCalendarGuiMessageHandler;
//}

class MCMainWindowPrivate;

class MCMainWindow : public QStackedWidget
{
    Q_OBJECT

public:
    MCMainWindow(QWidget *parent = Q_NULLPTR);
    ~MCMainWindow();

    void adjustSize(int width, int height);

public slots:
    void changeToInClassMode();

    void changeToNormalMode();

    void handleMessage(const QString&);

protected:
//    bool eventFilter(QObject *watched, QEvent *event);

private slots:
    void testSignalSlot(); //only for test modules connections.

    void on_pushButton_clicked(); //only for test signal connections.

private:
    void activateWindow();

    void registerMessageHandler();

private:
    Ui::MCMainWindow *ui;
    MCMainWindowPrivate *m_pData;
};

#endif // XDSOFT_MCMAINWINDOW_H
