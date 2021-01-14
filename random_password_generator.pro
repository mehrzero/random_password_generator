TEMPLATE = app
TARGET   = random_password_generator
CONFIG  += c++17

SOURCES += \
          source/help.cxx \
          source/leet_password.cxx \
          source/main.cxx \
          source/password_maker.cxx \
          source/wrong.cxx

HEADERS += \
          include/random_password_generator/colors.h
          include/random_password_generator/help.h
          include/random_password_generator/keyboard_letters.h
          include/random_password_generator/leet_password.h
          include/random_password_generator/logo.hpp
          include/random_password_generator/password_maker.h
          include/random_password_generator/requires.h
          include/random_password_generator/version.hpp
          include/random_password_generator/wrong.h


INCLUDEPATH += include
