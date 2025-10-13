#pragma once
#include "Platform.hpp"

class LinuxPlatform : public Platform {
public:
    std::string getPlatformName() const override;
};
