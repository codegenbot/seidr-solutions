#include <iostream>
#include <string>

std::string decipherMessage(const std::string& cipher, const std::string& mapping, const std::string& message) {
    std::string decipheredMessage;
    for (char c : message) {
        size_t index = cipher.find(c);
        if (index != std::string::npos) {
            decipheredMessage += mapping[index];
        } else {
            decipheredMessage += c;
        }
    }
    return decipheredMessage;
}

int main() {
    std::string cipher, mapping, message;
    std::cin >> cipher >> mapping >> message;
    std::cout << decipherMessage(cipher, mapping, message) << std::endl;
    return 0;
}