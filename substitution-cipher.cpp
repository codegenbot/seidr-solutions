#include <vector>
#include <iostream>
#include <string>

std::string substitutionCipher(const std::string& cipher1, const std::string& cipher2, const std::string& message) {
    std::string decipheredMessage;
    
    for (char c : message) {
        for (int i = 0; i < cipher1.length(); i++) {
            if (c == cipher1[i]) {
                decipheredMessage += cipher2[i];
                break;
            }
        }
    }
    
    return decipheredMessage;
}

int main() {
    std::string cipher1, cipher2, message;
    std::cout << "Enter the first string: ";
    std::cin >> cipher1;
    std::cout << "Enter the second string: ";
    std::cin >> cipher2;
    std::cout << "Enter the third string: ";
    std::cin >> message;
    
    std::string decipheredMessage = substitutionCipher(cipher1, cipher2, message);
    
    std::cout << "Deciphered message: " << decipheredMessage << std::endl;
    
    return 0;
}