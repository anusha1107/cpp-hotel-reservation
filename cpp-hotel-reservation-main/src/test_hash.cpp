#include <iostream>
#include <string>
#include "../handler/hash.hpp"

int main() {
    std::string password = "admin123";
    std::string hash = Hash::encrypt(password);
    std::cout << "Password: " << password << std::endl;
    std::cout << "Hash: " << hash << std::endl;
    return 0;
} 