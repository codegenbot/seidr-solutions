```cpp
#include <iostream>
#include <string>

std::string decipher(std::string cipher_map1, std::string cipher_map2, std::string message) {
    for (int i = 0; i < message.length(); i++) {
        char c = message[i];
        int pos = cipher_map1.find(c);
        if (pos != std::string::npos) {
            message[i] = cipher_map2[pos];
        }
    }
    return message;
}

int main() {
    std::string input;
    std::cout << "Enter the first string: ";
    std::getline(std::cin, input);
    std::string cipher_map1 = input;
    std::cout << "Enter the second string: ";
    std::getline(std::cin, input);
    std::string cipher_map2 = input;
    std::cout << "Enter the message to decipher: ";
    std::string message;
    std::getline(std::cin, message);
    std::cout << "Deciphered message: " << decipher(cipher_map1, cipher_map2, message) << std::endl;
    return 0;
}