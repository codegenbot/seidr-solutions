#include <map>
#include <string>
#include <iostream>
#include <unordered_map>

std::string decipher(std::string cipher_map1, std::string cipher_map2, std::string message) {
    std::unordered_map<char, char> mapping;
    for (int i = 0; i < cipher_map1.length(); i++) {
        mapping[std::tolower(cipher_map1[i])] = std::tolower(cipher_map2[i]);
        mapping[toupper(cipher_map1[i])] = toupper(cipher_map2[i]);
    }
    
    std::string result = "";
    for (char c : message) {
        if(mapping.find(std::tolower(c)) != mapping.end()) {
            // If character is found in the map, substitute with corresponding value from the map
            result += mapping.at(std::tolower(c));
        } else {
            // If character is not found in the map, add it as it is to the result
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
    std::cout << "Deciphered message: " << decipher(std::string(cipher_map1), std::string(cipher_map2), std::string(message)) << std::endl;
    return 0;