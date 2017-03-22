/**
 * XDCalendar Project 2017-03-21 version
  * mooncalendargui模块与其它模块信息控制类.这个类里主要定义该模块与其它模块交互的信号.
  *
  * @author BiXiaoxia
  * @version 2017.03.21.
*/
#ifndef XDKJ_GUIAPPMESSAGEHANDLER_H
#define XDKJ_GUIAPPMESSAGEHANDLER_H

#include "imessagehandler.h"

namespace ns_xd_msg {
class MESSAGEHANDLERSHARED_EXPORT MoonCalendarGuiMessageHandler : public IMessageHandler
{
    Q_OBJECT
signals:
    void testSignal();
};

}

#endif // XDKJ_GUIAPPMESSAGEHANDLER_H
