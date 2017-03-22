/**
 *  XDKJ Project 2017-03-21 version
  *
  * 单例类模板.
  *
  * @version 1.0 2014.04.15.实现类模板，以destroyInstance()方式删除单例类对象.
  * @version 2.0 2015.06.05.添加类模板内部类，单例类的释放权利不再交给使用者，因此要使用这个单例类模板.
  *          首要条件就是这个模板类必须在程序的整个运行期都需要存在，不能给一个临时性的类使用.
  * @author BiXiaoxia
  * @version 2017.03.21.
*/
#include <cstdlib>
#include <QMutex>
#include <QDebug>

namespace ns_xd_inc {
    template <typename T, typename ...VarList>
    class SingletonTemplate
    {
    public:
        static T *getInstance(VarList... args)
        {
            initInstance(args...);

            return m_pInstance;
        }

        static void destroyInstance()
        {
            qDebug() << "deleting~~~~~~" << m_pInstance;
            if(m_pInstance != NULL)
            {
                static QMutex mutex;
                mutex.lock();

                if(m_pInstance != NULL)
                {
                    delete m_pInstance;
                    m_pInstance = NULL;
                }

                mutex.unlock();
            }
        }

//    /*!
//     * \class GarbageCollector
//     * \brief 单例模板类对象回收类,使用方式，在单例类的cpp中声明了单例模板实例后使用.
//     * \example typedef SingletonTemplate<MessageHandler> MessageHandlerInstance;
//               //启用这个可以自动回收单例.如果不使用这个那么就使用destroyInstance，但这个存在问题.
//                使用者在中途删除，多线程同步处理等，貌似暂时没处理.
//                static MessageHandlerInstance::GarbageCollector msgHandlerGarba;
//     * \note 这个可能在mac下并不正常，暂时没平台并没有考虑平台差异.
//     * \sa destroyInstance();
//    */
//        class GarbageCollector
//        {
//        public:
//            GarbageCollector()
//            {
//                qDebug() << "creating the collector";
//            }

//            ~GarbageCollector()
//            {
//                qDebug() << "deleting the related sigleton instance";

//                if (m_pInstance != Q_NULLPTR)
//                {
//                    delete m_pInstance;
//                    m_pInstance = Q_NULLPTR;
//                }
//            }
//        };

    private:
        static void initInstance(VarList ... args)
        {
            if (m_pInstance == Q_NULLPTR)
            {
                QMutex mutex;
                mutex.lock();

                T *tempInstance = m_pInstance;

                if(m_pInstance == NULL)
                {
                    tempInstance = new T(args...);
                    m_pInstance = tempInstance;
                }

                //如果是QObject的对象，并且参数包里包含了父对象参数，那么下面这个程序退出注册销毁函数需要去掉，或者不能堆模板类对象设置父对象.
                //因为Qt OQbject作为父对象的内存管理机制,导致最后出问题，所以这个自动注册销毁交给使用者控制.
//                if(m_bAutoDelete)
//                {
//                    qDebug() << "resigster delete information" << m_pInstance;
//                    atexit(destroyInstance);
//                }

                qDebug() << "creating~~~~~~" << m_pInstance;
                mutex.unlock();
            }
        }

        SingletonTemplate(const SingletonTemplate &other);
        SingletonTemplate &operator=(const SingletonTemplate &other);
        SingletonTemplate();
        ~SingletonTemplate();

        static T *m_pInstance;
        static bool m_bAutoDelete;
//        static GarbageCollector *pGarbageCol;
    };

    template <typename T, typename ...VarList>
    T *SingletonTemplate<T, VarList...>::m_pInstance = Q_NULLPTR;

//    template <typename T, typename ...VarList>
//    typename SingletonTemplate<T, VarList...>::GarbageCollector *SingletonTemplate<T, VarList...>::garbageCol
//    = &SingletonTemplate<T, VarList...>::GarbageCollector;

//    template <typename T, typename ...VarList>
//    bool SingletonTemplate<T, VarList...>::m_bAutoDelete = true;
}
