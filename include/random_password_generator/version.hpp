#ifndef VERSION_HEADER_FILE
#define VERSION_HEADER_FILE

#include <iostream>

#include "colors.h"

inline void version() {
  std::cout << core::colors::yellow << "version 1\n \"2021 1 jan\"";
}

#endif