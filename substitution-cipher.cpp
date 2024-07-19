#include <vector>
#include <iostream>
#include <string>

std::string substituteCipher(const std::string& cipher1, const std::string& cipher2, const std::string& message) {
    std::string decipheredMessage;
    
    for (int i = 0; i < message.length(); i++) {
        if (i < cipher1.length()) {
            decipheredMessage += cipher2[i];
        } else {
            decipheredMessage += message[i];
        }
    }
    
    return decipheredMessage;
}

int main() {
    std::string cipher1, cipher2, message;
    std::cin >> cipher1 >> cipher2 >> message;
    std::cout << substituteCipher(cipher1, cipher2, message) << std::endl;
    return 0;
}