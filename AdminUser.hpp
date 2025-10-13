#pragma once
#include "User.hpp"

class AdminUser : public User {
public:
    AdminUser(Platform* p);
    std::string getInfo() const override;
};
