#ifndef XDSOFT_MCMAINWINDOW_H
#define XDSOFT_MCMAINWINDOW_H

#include <QStackedWidget>

namespace Ui {
class MCMainWindow;
}

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

private:
    void activateWindow();

private:
    Ui::MCMainWindow *ui;

};

#endif // XDSOFT_MCMAINWINDOW_H
