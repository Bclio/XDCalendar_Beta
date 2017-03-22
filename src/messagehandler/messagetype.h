/**
 * XDCalendar Project 2017-03-21 version
  * 信息类型定义.
  * @author BiXiaoxia
  * @version 2017.03.21.
*/
#ifndef XDKJ_MESSAGETYPE_H
#define XDKJ_MESSAGETYPE_H

#include <QtGlobal>

namespace ns_xd_msg {
enum class MsgHdrType : quint8 {
    MoonCalendarGui = 0, //gui模块信号管理类型. ==>mooncalendargui
    DataHandler, //数据控制信号管理类型. ==>datahandler
    FileManager, //文件管理信号管理类型. ==>filemanager

    Default = 255
};
}

#endif // XDKJ_MESSAGETYPE_H
