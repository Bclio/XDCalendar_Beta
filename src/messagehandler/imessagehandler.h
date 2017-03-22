/**
 * XDCalendar Project 2017-03-20 version
  * 信号管理类基类，目前这个类没有添加接口，只为抽象基类使用，所有实际信号管理类都从该类派生.
  * 所有类都处于ns_xd_msg域中，添加具体信号管理类都如此操作.
  * @author BiXiaoxia
  * @version 2017.03.20.
*/
#ifndef XDKJ_IMESSAGEHANDLER_H
#define XDKJ_IMESSAGEHANDLER_H

#include "messagehandler_global.h"
#include <QObject>

namespace ns_xd_msg {
class IMessageHandler : public QObject
{
    Q_OBJECT

public:
    virtual ~IMessageHandler() = default;
};

}

#endif // XDKJ_IMESSAGEHANDLER_H
