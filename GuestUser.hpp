#pragma once
#include "User.hpp"

class GuestUser : public User {
public:
    GuestUser(Platform* p);
    std::string getInfo() const override;
};
