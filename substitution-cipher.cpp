```cpp
#include <vector>
#include <iostream>
#include <string>
#include <map>

std::string decipher(std::string cipher_map1, std::string cipher_map2, std::string message) {
    std::map<char, char> mapping;
    std::string lower_cipher_map1 = cipher_map1;
    std::string lower_cipher_map2 = cipher_map2;

    // Convert to lowercase
    for (int i = 0; i < lower_cipher_map1.length(); i++) {
        mapping[lower_cipher_map1[i]] = lower_cipher_map2[i];
    }

    std::string result = "";
    for (char c : message) {
        if(mapping.find(tolower(c)) != mapping.end()) { 
            result += mapping.at(tolower(c));
        } else {
            result += c; 
        }
    }
    return result;
}

int main() {
    std::string cipher_map1, cipher_map2, message;
    std::cout << "Enter the first string: ";
    std::getline(std::cin, cipher_map1);
    std::cout << "Enter the second string: ";
    std::getline(std::cin, cipher_map2);
    std::cout << "Enter the message to decipher: ";
    std::getline(std::cin, message);
    std::cout << "Deciphered message: " << decipher(cipher_map1, cipher_map2, message) << std::endl;
    return 0;
}