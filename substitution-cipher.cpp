#include <iostream>
#include <string>

std::string substitutionCipher(const std::string& cipher, const std::string& message) {
    std::string decipheredMessage;
    for (char c : message) {
        size_t index = cipher.find(c);
        if (index != std::string::npos) {
            decipheredMessage += cipher[index];
        } else {
            decipheredMessage += c;
        }
    }
    return decipheredMessage;
}

int main() {
    std::string cipher1, cipher2, message;
    std::cin >> cipher1 >> cipher2 >> message;
    std::string decipheredMessage = substitutionCipher(cipher1, message);
    std::cout << decipheredMessage << std::endl;
    return 0;
}