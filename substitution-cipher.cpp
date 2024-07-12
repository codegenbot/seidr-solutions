#include <iostream>
#include <string>
#include <unordered_map>

std::string decipher(std::string cipher1, std::string cipher2, std::string message) {
    std::unordered_map<char, char> mapping;
    for (int i = 0; i < cipher2.length(); i++) {
        mapping[cipher2[i]] = cipher1[i];
    }
    std::string result = "";
    for (char c : message) {
        if (mapping.find(c) != mapping.end()) {
            result += mapping[c];
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    std::string cipher1, cipher2, message;
    std::cout << "Enter the first string: ";
    std::cin >> cipher1;
    std::cout << "Enter the second string: ";
    std::cin >> cipher2;
    std::cout << "Enter the message to decipher: ";
    std::cin >> message;
    std::cout << "Deciphered message: " << decipher(cipher1, cipher2, message) << std::endl;
    return 0;
}