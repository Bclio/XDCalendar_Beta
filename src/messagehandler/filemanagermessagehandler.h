/**
 * XDCalendar Project 2017-03-21 version
  *
  * @author BiXiaoxia
  * @version 2017.03.21.
*/
#ifndef XDKJ_FILEMANAGERMESSAGEHANDLER_H
#define XDKJ_FILEMANAGERMESSAGEHANDLER_H
#include "imessagehandler.h"

namespace ns_xd_msg {
class MESSAGEHANDLERSHARED_EXPORT FileManagerMessageHandler : public IMessageHandler
{
    Q_OBJECT

signals:
    void testSignal();
};
}

#endif // XDKJ_FILEMANAGERMESSAGEHANDLER_H

