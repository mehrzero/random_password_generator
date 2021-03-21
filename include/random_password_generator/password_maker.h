#ifndef PASSWORD_MAKER_HEADER_FILE
#define PASSWORD_MAKER_HEADER_FILE

#include <cstdlib>
#include <string>
#include <ctime>

namespace core {
std::string custom_password_maker(const int unit, const std::string& mood);
}

#endif
