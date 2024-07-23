#include <vector>
#include <iostream>
#include <string>

std::string substituteCipher(const std::string& message, const std::string& key) {
    std::string decipheredMessage;
    
    for (char c : message) {
        size_t index = 0;
        while (index < key.length() && c != key[index]) {
            index++;
        }
        if (index == key.length()) {
            decipheredMessage += c;
        } else {
            decipheredMessage += key[index];
        }
    }
    
    return decipheredMessage;
}

int main() {
    std::string message, key, cipherText;
    std::cout << "Enter the first string: ";
    std::cin >> key;
    std::cout << "Enter the second string: ";
    std::cin >> cipherText;
    std::cout << "Enter the third string: ";
    std::cin >> message;
    
    std::cout << substituteCipher(message, key) << std::endl;
    
    return 0;
}