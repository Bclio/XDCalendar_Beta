/**
 * XDCalendar Project 2017-03-21 version
  * 数据请求控制类，负责网络数据的交互.
  * @author BiXiaoxia
  * @version 2017.03.21.
*/
#ifndef XDKJ_DATAHANDLER_H
#define XDKJ_DATAHANDLER_H

#include "datahandler_global.h"
#include <request>

class DataHandlerPrivate;

namespace ns_xd_inc {
template<typename T, typename ...VarListT>class SingletonTemplate;
}

namespace ns_xd_datmgr {

class DataHandler
{
public:
    /*!
      * \enum RequestType,请求种类枚举类.
      * \var Login, 登录.
      * \var Term, 学期.
      * \var Schedule, 课表.
    */
    Q_ENUMS(RequestType)
    enum RequestType :quint8 {Login, TermDB, Schedule, Default = 255};
public:
    /// @brief 获取信号类管理类对象指针.
    static DataHandler *getInstance();

    /// @brief 销毁管理类对象指针.
    static void destroyInstance();

public:
    DataHandler(const DataHandler &other) = delete;
    DataHandler &operator =(const DataHandler &other) = delete;

private:
    DataHandler();
    ~DataHandler();
    DataHandlerPrivate *m_pData;

    friend class ns_xd_inc::SingletonTemplate<DataHandler>;
};
}

#endif // XDKJ_DATAHANDLER_H
