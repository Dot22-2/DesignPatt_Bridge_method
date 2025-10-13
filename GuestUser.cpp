#include "GuestUser.hpp"

GuestUser::GuestUser(Platform* p) : User(p) {}

std::string GuestUser::getInfo() const {
    return "[GuestUser] Platform: " + platform->getPlatformName();
}
