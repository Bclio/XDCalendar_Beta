include(src.pri)

CONFIG(release, debug|release) {
    DESTDIR = $$MOONCALENDAR_BUILD_ROOT_PATH/libs/release
    DLLDESTDIR =  $$MOONCALENDAR_BUILD_ROOT_PATH/bin/release
}else{
    DESTDIR = $$MOONCALENDAR_BUILD_ROOT_PATH/libs/debug
    DLLDESTDIR =  $$MOONCALENDAR_BUILD_ROOT_PATH/bin/debug
}
