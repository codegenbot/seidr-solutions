#include <iostream>
#include <string>

std::string decipherMessage(const std::string& cipher1, const std::string& cipher2, const std::string& message) {
    std::string decipheredMessage = "";

    for (char c : message) {
        size_t index = cipher2.find(c);
        if (index != std::string::npos) {
            decipheredMessage += cipher1[index];
        }
    }

    return decipheredMessage;
}

int main() {
    std::string cipher1, cipher2, message;
    std::getline(std::cin, cipher1);
    std::getline(std::cin, cipher2);
    std::getline(std::cin, message);

    std::cout << decipherMessage(cipher1, cipher2, message) << std::endl;

    return 0;
}