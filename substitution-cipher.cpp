#include <iostream>
#include <string>

std::string decipherMessage(const std::string& cipher1, const std::string& cipher2, const std::string& message) {
    std::string decipheredMessage = message;
    for (int i = 0; i < message.size(); i++) {
        char c = message[i];
        int index = cipher2.find(c);
        if (index != std::string::npos) {
            decipheredMessage[i] = cipher1[index];
        }
    }
    return decipheredMessage;
}

int main() {
    std::string cipher1, cipher2, message;
    std::cin >> cipher1 >> cipher2 >> message;
    std::cout << decipherMessage(cipher1, cipher2, message) << std::endl;
    return 0;
}