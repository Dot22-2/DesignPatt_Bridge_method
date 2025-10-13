#pragma once
#include <string>
#include "Platform.hpp"

class User {
protected:
    Platform* platform;

public:
    User(Platform* p);
    virtual ~User();
    virtual std::string getInfo() const = 0;
};
