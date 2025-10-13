#include "AdminUser.hpp"

AdminUser::AdminUser(Platform* p) : User(p) {}

std::string AdminUser::getInfo() const {
    return "[AdminUser] Platform: " + platform->getPlatformName();
}
