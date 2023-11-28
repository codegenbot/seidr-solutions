#include <iostream>
#include <string>

std::string decipherMessage(const std::string& cipher1, const std::string& cipher2, const std::string& message) {
    std::string decipheredMessage = message;
    for (int i = 0; i < message.length(); i++) {
        for (int j = 0; j < cipher1.length(); j++) {
            if (message[i] == cipher2[j]) {
                decipheredMessage[i] = cipher1[j];
                break;
            }
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