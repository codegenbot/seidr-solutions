```cpp
#include <iostream>
#include <string>

std::string decipher(std::string cipher_map1, std::string cipher_map2, std::string message) {
    std::string deciphered_message = "";
    for (int i = 0; i < message.length(); i++) {
        char c = message[i];
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
    std::string input1;
    std::getline(std::cin, input1);

    std::cout << "Enter the second map: ";
    std::string input2;
    std::getline(std::cin, input2);

    std::cout << "Enter the message to decipher: ";
    std::string input3;
    std::getline(std::cin, input3);

    std::string cipher_map1 = input1; 
    std::string cipher_map2 = input2; 
    std::string message = input3; 

    std::cout << "Deciphered message: " << decipher(cipher_map1, cipher_map2, message) << std::endl;
    return 0;
}