#include "AdminUser.hpp"
#include "GuestUser.hpp"
#include "WindowsPlatform.hpp"
#include "LinuxPlatform.hpp"
#include <iostream>
#include <vector>

int main() {
    Platform* win = new WindowsPlatform();
    Platform* linux = new LinuxPlatform();

    std::vector<User*> users;
    users.push_back(new AdminUser(win));
    users.push_back(new GuestUser(linux));

    for (const auto& user : users) {
        std::cout << user->getInfo() << "\n";
        delete user;
    }

    delete win;
    delete linux;

    return 0;
}
