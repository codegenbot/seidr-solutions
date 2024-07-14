```cpp
#include <iostream>
#include <string>

std::string decipher(std::string cipher_map1, std::string cipher_map2, std::string message) {
    for (auto& c : cipher_map1) {
        c = tolower(c);
    }
    for (auto& c : cipher_map2) {
        c = tolower(c);
    }

    std::string deciphered_message = "";
    for (int i = 0; i < message.length(); i++) {
        char c = tolower(message[i]); 
        int pos = cipher_map1.find(c);
        if (pos != std::string::npos) {
            deciphered_message += cipher_map2[pos];
        } else {
            deciphered_message += c;
        }
    }
    return deciphered_message;
}

int main() {
    std::cout << "Enter the first map: ";
    std::string cipher_map1;
    std::getline(std::cin, cipher_map1);

    std::cout << "Enter the second map: ";
    std::string cipher_map2;
    std::getline(std::cin, cipher_map2);

    std::cout << "Enter the message to decipher: ";
    std::string message;
    std::getline(std::cin, message);

    std::cout << "Deciphered message: " << decipher(cipher_map1, cipher_map2, message) << std::endl;
}