```cpp
#include <vector>
#include <iostream>
#include <string>

std::string decipher(std::string cipher_map1, std::string cipher_map2, std::string message) {
    for (int i = 0; i < cipher_map1.length(); i++) {
        int pos = message.find(cipher_map1[i]);
        while (pos != std::string::npos) {
            message.replace(pos, 1, &cipher_map2[i]);
            pos = message.find(cipher_map1[i], pos + 1);
        }
    }
    return message;
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