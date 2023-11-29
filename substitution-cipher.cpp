#include <iostream>
#include <string>

std::string substitutionCipher(const std::string& cipher, const std::string& mapping, const std::string& message) {
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
    
    std::string decipheredMessage = substitutionCipher(cipher, mapping, message);
    std::cout << decipheredMessage << std::endl;
    
    return 0;
}