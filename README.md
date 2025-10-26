# C++ Bridge Method

This repository demonstrates a clean implementation of the **Bridge** design pattern in C++ for a console-based application.

---

## Project Structure

- `Platform.hpp` – Abstract interface for platform-specific behavior  
- `WindowsPlatform.hpp / WindowsPlatform.cpp` – Concrete implementation for Windows  
- `LinuxPlatform.hpp / LinuxPlatform.cpp` – Concrete implementation for Linux  
- `User.hpp / User.cpp` – Abstract user class holding a platform reference  
- `AdminUser.hpp / AdminUser.cpp` – Admin-specific user logic  
- `GuestUser.hpp / GuestUser.cpp` – Guest-specific user logic  
- `main.cpp` – Entry point showcasing decoupled user-platform interaction  

---

### Requirements

- **Compiler**: Tested with `MSVC v19.44` (Visual Studio 2022)  
- **C++ Standard**: C++17 or higher  

---

## Usage Example

```cpp
Platform* win = new WindowsPlatform();
Platform* linux = new LinuxPlatform();

std::vector<User*> users;
users.push_back(new AdminUser(win));
users.push_back(new GuestUser(linux));

for (const auto& user : users) {
    std::cout << user->getInfo() << "\n";
}

// Output:
// [AdminUser] Platform: Windows
// [GuestUser] Platform: Linux
