#include <map>
#include <string>

std::string decipher(std::string cipher_map1, std::string cipher_map2, std::string message) {
    char* mapping[256];
    int i = 0;
    for (int j = 0; j < std::min(cipher_map1.length(), cipher_map2.length()); j++) {
        mapping[tolower(cipher_map1[j])] = &tolower(cipher_map2[j]);
        mapping[toupper(cipher_map1[j])] = toupper(cipher_map2[j]);
    }
    
    std::string result = "";
    for (char c : message) {
        if(mapping[std::tolower(c)] != nullptr) {
            // If character is found in the map, substitute with corresponding value from the map
            result += *mapping[std::tolower(c)];
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
}