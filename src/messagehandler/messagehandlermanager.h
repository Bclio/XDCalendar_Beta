/**
 * XDCalendar Project 2017-03-20 version
  * 信号类对象管理类，采用简单工厂模式跟单例模式，管理项目中各种信号类的对象.
  * @author BiXiaoxia
  * @version 2017.03.20.
*/
#ifndef XDKJ_MESSAGEHANDLERMANAGER_H
#define XDKJ_MESSAGEHANDLERMANAGER_H

#include "messagetype.h"
#include "messagehandler_global.h"

namespace ns_xd_inc {
template<typename T, typename ...VarListT>class SingletonTemplate;
}

namespace ns_xd_msg {
class IMessageHandler;
class MessageHandlerManagerPrivate;

class MESSAGEHANDLERSHARED_EXPORT MessageHandlerManager
{
public:
    /// @brief 获取信号类管理类对象指针.
    static MessageHandlerManager *getInstance();

    static void destroyInstance();

    /// @brief 获取类型为msgType的信号类对象.
    /// @param msgType, 类型.
    /// @see MsgHdrType.
    IMessageHandler *getMessageHandler(MsgHdrType msgType);

public:
    MessageHandlerManager(const MessageHandlerManager &other) = delete;
    MessageHandlerManager &operator =(const MessageHandlerManager &other) = delete;

private:
    MessageHandlerManager();
    ~MessageHandlerManager();
    MessageHandlerManagerPrivate *m_pData;

    friend class ns_xd_inc::SingletonTemplate<MessageHandlerManager>;
};

}

#endif // XDKJ_MESSAGEHANDLERMANAGER_H
