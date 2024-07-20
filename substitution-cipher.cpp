#include <map>
#include <string>
#include <iostream>

std::string decipher(std::string cipher_map1, std::string cipher_map2, std::string message) {
    std::map<char, char> mapping;
    for (int j = 0; j < std::min(cipher_map1.length(), cipher_map2.length()); j++) {
        mapping[tolower(cipher_map1[j])] = tolower(cipher_map2[j]);
        mapping[toupper(cipher_map1[j])] = toupper(cipher_map2[j]);
    }
    
    std::string result = "";
    for (char c : message) {
        if(mapping.find(std::tolower(c)) != mapping.end()) {
            // If character is found in the map, substitute with corresponding value from the map
            result += mapping[std::tolower(c)];
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
    std::cin >> cipher_map1;
    std::cout << "Enter the second string: ";
    std::cin >> cipher_map2;
    std::cout << "Enter the message to decipher: ";
    std::cin >> message;
    std::cout << "Deciphered message: " << decipher(cipher_map1, cipher_map2, message) << std::endl;
    return 0;
}