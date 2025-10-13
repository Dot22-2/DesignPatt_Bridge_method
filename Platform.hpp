#pragma once
#include <string>

class Platform {
public:
    virtual ~Platform() = default;
    virtual std::string getPlatformName() const = 0;
};
