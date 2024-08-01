#include <vector>
#include <iostream>
#include <string>

std::string substitutionCipher(const std::string& cipher1, const std::string& cipher2, const std::string& message) {
    std::string decipheredMessage;
    
    for (char c : message) {
        if (c >= 'a' && c <= 'z') {
            int index = c - 'a';
            decipheredMessage += cipher1[index] == cipher2[index] ? (cipher1[index] - 'a' + 'a') : cipher2[index];
        } else if (c >= 'A' && c <= 'Z') {
            int index = c - 'A';
            decipheredMessage += cipher1[index] == cipher2[index] ? (cipher1[index] - 'A' + 'A') : cipher2[index];
        } else {
            decipheredMessage += c;
        }
    }
    
    return decipheredMessage;
}

int main() {
    std::string cipher1, cipher2, message;
    std::cin >> cipher1 >> cipher2 >> message;
    std::cout << substitutionCipher(cipher1, cipher2, message) << std::endl;
    return 0;
}