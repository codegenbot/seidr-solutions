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
    std::string cipherText, key, message;
    std::cout << "Enter the first string: ";
    std::cin >> key;
    std::cout << "Enter the second string: ";
    std::cin >> cipherText;
    std::cout << "Enter the third string: ";
    std::getline(std::cin, message);  // Read a line of text (not just one word)
    cipherText = message;  // Store the input in cipherText variable
    
    std::cout << substituteCipher(cipherText, key) << std::endl;
    
    return 0;
}