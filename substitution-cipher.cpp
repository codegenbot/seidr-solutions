```cpp
#include <iostream>
#include <string>

std::string decipher(std::string cipher_map1, std::string cipher_map2, std::string message) {
    cipher_map1 = cipher_map1 + cipher_map2;
    std::transform(message.begin(), message.end(), message.begin(),
                   [](unsigned char c){ return tolower((char)c); });

    std::string deciphered_message = "";
    for (int i = 0; i < message.length(); i++) {
        int pos = cipher_map1.find(cipher_map1[i]);
        if (pos != std::string::npos) {
            deciphered_message += cipher_map2[pos];
        } else {
            deciphered_message += cipher_map1[i];
        }
    }
    return deciphered_message;
}

int main() {
    std::string cipher_map1;
    std::string cipher_map2;
    std::string message;

    std::cout << "Enter the first map: ";
    std::getline(std::cin, cipher_map1);

    std::cout << "Enter the second map: ";
    std::getline(std::cin, cipher_map2);

    std::cout << "Enter the message to decipher: ";
    std::getline(std::cin, message);

    std::cout << "Deciphered message: " << decipher(cipher_map1, cipher_map2, message) << std::endl;
}