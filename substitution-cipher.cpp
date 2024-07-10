#include <vector>
#include <iostream>
#include <string>

std::string substitutionCipher(const std::string& cipher1, const std::string& cipher2, const std::string& message) {
    string decipheredMessage;
    for (int i = 0; i < message.length(); i++) {
        if (cipher1[i] == cipher2[i]) {
            decipheredMessage += cipher1[i];
        } else {
            decipheredMessage += message[i];
        }
    }
    return decipheredMessage;
}

int main() {
    string cipher1, cipher2, message;
    std::cin >> cipher1 >> cipher2 >> message;
    std::cout << substitutionCipher(cipher1, cipher2, message) << std::endl;
    return 0;
}