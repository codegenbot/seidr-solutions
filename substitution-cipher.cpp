```cpp
#include <algorithm>
#include <cctype>
#include <string>

std::string decipher(std::string cipher_map1, std::string cipher_map2, std::string message) {
    cipher_map1.erase_if([&](char c){return !isalpha(c);});
    cipher_map2.erase_if([&](char c){return !isalpha(c);});

    std::transform(cipher_map1.begin(), cipher_map1.end(), cipher_map1.begin(), ::tolower);
    std::transform(cipher_map2.begin(), cipher_map2.end(), cipher_map2.begin(), ::tolower);

    message.erase_if([&](char c){return !isalpha(c);});
    std::transform(message.begin(), message.end(), message.begin(), ::tolower);

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
}