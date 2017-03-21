#-------------------------------------------------
#
#  File created by BiXiaoxia 2017-02-04
#  The file decides the configuration for all source.
#
#-------------------------------------------------
#如果需要编译64位版本，打开Q_64_COMPILE定义，重新qmake，编译.不加这个定义为默认32位版本.
#DEFINES += Q_64_COMPILE
#打开C++11支持
greaterThan(QT_MAJOR_VERSION, 4){
  CONFIG += c++11
 }

#source root path.
#注意，PWD是src.pri文件所在的路径，即源码文件存放路径.
MOONCALENDAR_BETA_SRC_ROOT_PATH = $$PWD
#DEPENDICES_LIBS_PATH = $$SRC_ROOT_PATH/../../../Dependencies

message("src.pri path"$$MOONCALENDAR_BETA_SRC_ROOT_PATH)
message($$_PRO_FILE_PWD_)
message($$PWD)
message($$_PRO_FILE_)

#set up the XDPrpject build root path. eg.XDProject_Builds.
XDPROJECT_BUILD_ROOT_PATH = $${MOONCALENDAR_BETA_SRC_ROOT_PATH}/../../../XDProject_Builds
message("@@@@@@"$$XDPROJECT_BUILD_ROOT_PATH)
message("root path::::")

##开始调试开发阶段，关闭该定义，让所有moudles以动态库方式定位使用，增加开发及调试效率，
##最后release版本，将此定义打开.
#CONFIG(release, release|debug) {
#    DEFINES += USE_STATIC_LIB
#    DEFINES += QT_NO_DEBUG_OUTPUT
#}

#设置MoonCalendar的build路径.
MOONCALENDAR_BUILD_ROOT_PATH = $$XDPROJECT_BUILD_ROOT_PATH/MoonCalendar_Beta

CONFIG(release, debug|release) {
    DEPENDPATH += $$MOONCALENDAR_BUILD_ROOT_PATH/libs/x86/Release
    LIBS += -L$$MOONCALENDAR_BUILD_ROOT_PATH/libs/x86/Release
}else{
    DEPENDPATH += $$MOONCALENDAR_BUILD_ROOT_PATH/libs/x86/Debug
    LIBS += -L$$MOONCALENDAR_BUILD_ROOT_PATH/libs/x86/Debug
}

#platform相关设置.
*-g++{
message("used g++ complier")

}else:macx-clang{

}else:win32-msvc*{
  QMAKE_CXXFLAGS += /Zm500
}

