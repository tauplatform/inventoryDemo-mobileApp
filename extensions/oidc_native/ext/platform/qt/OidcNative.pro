QT -= core

TARGET = oidc_native
TEMPLATE = lib

CONFIG += staticlib warn_on

isEmpty(RHODES_ROOT) {
  RHODES_ROOT = ../../../../../../rhodes
}

greaterThan(QT_MINOR_VERSION, 6): {
    CONFIG += c++14
    DEFINES += RHODES_VERSION_2
  QT += core
}

equals(QT_MAJOR_VERSION, 5) {
    equals(QT_MINOR_VERSION, 6) {
        QT += core
        DEFINES += OS_SAILFISH OS_LINUX
        CONFIG += c++14
    }
}

INCLUDEPATH += \
$$RHODES_ROOT/lib/commonAPI/coreapi/ext/shared\
$$RHODES_ROOT/platform/shared/common\
$$RHODES_ROOT/platform/shared/rubyext\
$$RHODES_ROOT/platform/shared/ruby/include\
$$RHODES_ROOT/platform/shared\
../../shared

macx {
  DESTDIR = $$RHODES_ROOT/platform/osx/bin/extensions
  OBJECTS_DIR = $$RHODES_ROOT/platform/osx/bin/extensions/oidc_native
  INCLUDEPATH += $$RHODES_ROOT/platform/shared/ruby/iphone
}

unix:!macx {
    DEFINES += OS_LINUX
    DESTDIR = $$RHODES_ROOT/platform/linux/bin/extensions
    OBJECTS_DIR = $$RHODES_ROOT/platform/linux/bin/extensions/oidc_native 
    INCLUDEPATH += $$RHODES_ROOT/platform/shared/ruby/linux

    QMAKE_CFLAGS += -fvisibility=hidden
    QMAKE_CXXFLAGS += -fvisibility=hidden
}

win32 {
  DESTDIR = $$RHODES_ROOT/platform/win32/bin/extensions
  OBJECTS_DIR = $$RHODES_ROOT/platform/win32/bin/extensions/oidc_native 
  DEFINES += WIN32 _WINDOWS _LIB _UNICODE UNICODE WIN32_LEAN_AND_MEAN
  debug {
    DEFINES += _DEBUG DEBUG
  }
  release {
    DEFINES += _NDEBUG NDEBUG
  }
  INCLUDEPATH += $$RHODES_ROOT/platform/shared/ruby/win32
}

DEFINES += RHODES_QT_PLATFORM _XOPEN_SOURCE _DARWIN_C_SOURCE

!isEmpty(RHOSIMULATOR_BUILD) {
  DEFINES += RHODES_EMULATOR
}

!win32 {
  QMAKE_CFLAGS_WARN_ON += -Wno-extra -Wno-unused -Wno-sign-compare -Wno-format -Wno-parentheses
  QMAKE_CXXFLAGS_WARN_ON += -Wno-extra -Wno-unused -Wno-sign-compare -Wno-format -Wno-parentheses
}
win32 {
  QMAKE_CFLAGS_WARN_ON += /wd4996 /wd4100 /wd4005
  QMAKE_CXXFLAGS_WARN_ON += /wd4996 /wd4100 /wd4005
  QMAKE_CFLAGS_RELEASE += /O2
  QMAKE_CXXFLAGS_RELEASE += /O2
}

HEADERS += \
..\..\shared\generated\cpp\IOidcNative.h\
..\..\shared\generated\cpp\OidcNativeBase.h

SOURCES += \
..\..\shared\generated\cpp\OidcNative_js_wrap.cpp\
..\..\shared\generated\cpp\OidcNative_ruby_wrap.cpp\
..\..\shared\generated\cpp\OidcNativeBase.cpp\
..\..\shared\generated\OidcNative_api_init.cpp\
..\..\shared\generated\OidcNative_js_api.cpp\
..\..\shared\generated\OidcNative_ruby_api.c\
src\OidcNative_impl.cpp
