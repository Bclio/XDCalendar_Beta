#include "messagehandlermanager.h"
#include <singletontemplate.h>
#include "mooncalendarguimessagehandler.h"
#include "datahandlermessgehandler.h"
#include "filemanagermessagehandler.h"

namespace ns_xd_msg {
class MessageHandlerManagerPrivate {
    friend class MessageHandlerManager;

    ~MessageHandlerManagerPrivate() {
        if(Q_NULLPTR != pMCGuiMsgHdr) {
            delete pMCGuiMsgHdr;
            pMCGuiMsgHdr = Q_NULLPTR;
        }


        if(Q_NULLPTR != pDataHdrMsgHdr) {
            delete pDataHdrMsgHdr;
            pDataHdrMsgHdr = Q_NULLPTR;
        }

        if(Q_NULLPTR != pFileMgrHdr) {
            delete pFileMgrHdr;
            pFileMgrHdr = Q_NULLPTR;
        }
    }

    MoonCalendarGuiMessageHandler *pMCGuiMsgHdr = Q_NULLPTR;
    DataHandlerMessageHandler *pDataHdrMsgHdr = Q_NULLPTR;
    FileManagerMessageHandler *pFileMgrHdr = Q_NULLPTR;
};

typedef ns_xd_inc::SingletonTemplate<MessageHandlerManager> MessageHdrMgrInstance;

MessageHandlerManager *MessageHandlerManager::getInstance()
{
    return MessageHdrMgrInstance::getInstance();
}

void MessageHandlerManager::destroyInstance()
{
    MessageHdrMgrInstance::destroyInstance();
}

IMessageHandler *MessageHandlerManager::getMessageHandler(MsgHdrType msgType)
{
    IMessageHandler *pMsgHdr = Q_NULLPTR;

    switch(msgType) {
    case MsgHdrType::MoonCalendarGui: {
        if(Q_NULLPTR == m_pData->pMCGuiMsgHdr) {
            m_pData->pMCGuiMsgHdr = new MoonCalendarGuiMessageHandler;
        }

        pMsgHdr = m_pData->pMCGuiMsgHdr;
    }
        break;

    case MsgHdrType::DataHandler: {
        if(Q_NULLPTR == m_pData->pDataHdrMsgHdr) {
            m_pData->pDataHdrMsgHdr = new DataHandlerMessageHandler;
        }

        pMsgHdr = m_pData->pDataHdrMsgHdr;
    }
        break;

    case MsgHdrType::FileManager: {
        if(Q_NULLPTR == m_pData->pFileMgrHdr) {
            m_pData->pFileMgrHdr = new FileManagerMessageHandler;
        }

        pMsgHdr = m_pData->pFileMgrHdr;
    }
        break;

    default:
        pMsgHdr = Q_NULLPTR;
        break;
    }

    return pMsgHdr;
}

MessageHandlerManager::~MessageHandlerManager()
{
    delete m_pData;
}

MessageHandlerManager::MessageHandlerManager():
    m_pData(new MessageHandlerManagerPrivate)
{

}

}
