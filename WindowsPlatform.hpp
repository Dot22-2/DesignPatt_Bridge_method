#pragma once
#include "Platform.hpp"

class WindowsPlatform : public Platform {
public:
    std::string getPlatformName() const override;
};
