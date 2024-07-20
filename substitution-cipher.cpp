#include <map>
#include <string>
#include <iostream>

std::string decipher(std::string cipher_map1, std::string cipher_map2, std::string message) {
    std::map<char, char> mapping;
    for (int j = 0; j < std::min(cipher_map1.length(), cipher_map2.length()); j++) {
        mapping.insert(std::make_pair(std::tolower(cipher_map1[j]), std::tolower(cipher_map2[j])));
    }
    
    std::string result = "";
    for (char c : message) {
        if(mapping.find(std::tolower(c)) != mapping.end()) {
            result += mapping[std::tolower(c)];
        } else {
            result += c; 
        }
    }
    return result;
}

int main() {
    char cipher_map1[256], cipher_map2[256], message[256];
    std::cout << "Enter the first string: ";
    std::cin.getline(cipher_map1, 256);
    std::cout << "Enter the second string: ";
    std::cin.getline(cipher_map2, 256);
    std::cout << "Enter the message to decipher: ";
    std::cin.getline(message, 256);
    std::cout << decipher(std::string(cipher_map1), std::string(cipher_map2), std::string(message)) << std::endl;
    return 0;
}