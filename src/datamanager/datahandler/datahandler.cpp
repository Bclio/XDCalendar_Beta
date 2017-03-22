#include "datahandler.h"
#include <singletontemplate.h>

namespace ns_xd_datmgr {
typedef ns_xd_inc::SingletonTemplate<DataHandler> DataHandlerInstance;

DataHandler *DataHandler::getInstance()
{
    return DataHandlerInstance::getInstance();
}

void DataHandler::destroyInstance()
{
    DataHandlerInstance::destroyInstance();
}

DataHandler::DataHandler()
{

}

DataHandler::~DataHandler()
{

}

}
