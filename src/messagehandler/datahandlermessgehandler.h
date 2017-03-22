/**
 * XDCalendar Project 2017-03-21 version
  *
  * @author BiXiaoxia
  * @version 2017.03.21.
*/
#ifndef XDKJ_DATAHANDLERMESSGEHANDLER_H
#define XDKJ_DATAHANDLERMESSGEHANDLER_H

#include "imessagehandler.h"

namespace ns_xd_msg {
class MESSAGEHANDLERSHARED_EXPORT DataHandlerMessageHandler : public IMessageHandler
{
    Q_OBJECT

   signals:
    void testSignal();
};
}

#endif // XDKJ_DATAHANDLERMESSGEHANDLER_H
