#include <vector>
#include <iostream>
#include <string>

std::string substituteCipher(const std::string& cipherText, const std::string& key) {
    std::string decipheredMessage;
    
    for (char c : cipherText) {
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
    std::string cipherText, key;
    std::cout << "Enter the first string: ";
    std::cin >> cipherText;
    std::cout << "Enter the second string: ";
    std::cin >> key;
    std::cout << "Enter the third string: ";
    std::cin >> cipherText;
    
    std::cout << substituteCipher(cipherText, key) << std::endl;
    
    return 0;
}