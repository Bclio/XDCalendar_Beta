/**
 * XDCalendar Project 2017-03-20 version
  *
  * @author BiXiaoxia
  * @version 2017.03.20.
*/
#ifndef XDKJ_IMESSAGEHANDLER_H
#define XDKJ_IMESSAGEHANDLER_H

#include "messagehandler_global.h"
#include <QObject>

namespace ns_xdkj {
class IMessageHandler : public QObject
{
    Q_OBJECT

public:
    virtual ~IMessageHandler();

private:
    IMessageHandler(QObject *parent = 0);
};

}


#endif // XDKJ_IMESSAGEHANDLER_H
