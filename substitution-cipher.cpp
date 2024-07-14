```cpp
#include <iostream>
#include <string>

std::string decipher(std::string cipher_map1, std::string cipher_map2, std::string message) {
    std::string cipher_map1_lower = cipher_map1;
    std::transform(cipher_map1_lower.begin(), cipher_map1_lower.end(), cipher_map1_lower.begin(),
                   [](unsigned char c){ return tolower((char)c); });

    std::string cipher_map2_lower = cipher_map2;
    std::transform(cipher_map2_lower.begin(), cipher_map2_lower.end(), cipher_map2_lower.begin(),
                   [](unsigned char c){ return tolower((char)c); });

    std::string deciphered_message = "";
    for (int i = 0; i < message.length(); i++) {
        char c = tolower(message[i]); 
        int pos = cipher_map1_lower.find(c);
        if (pos != std::string::npos) {
            deciphered_message += cipher_map2_lower[pos];
        } else {
            deciphered_message += c;
        }
    }
    return deciphered_message;
}

int main() {
    char temp[256], temp2[256], message[256];

    std::cout << "Enter the first map: ";
    std::cin.getline(temp, 256);
    std::string cipher_map1 = temp;

    std::cout << "Enter the second map: ";
    std::cin.getline(temp2, 256);
    std::string cipher_map2 = temp2;

    std::cout << "Enter the message to decipher: ";
    std::cin.getline(message, 256);
    std::string input_message = message;

    std::cout << "Deciphered message: " << decipher(cipher_map1, cipher_map2, input_message) << std::endl;
}