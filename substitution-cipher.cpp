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
    std::string temp, temp2, message;

    std::cout << "Enter the first map: "; 
    cin >> temp;
    std::string cipher_map1 = temp;

    std::cout << "Enter the second map: "; 
    cin >> temp2;
    std::string cipher_map2 = temp2;

    std::cout << "Enter the message to decipher: ";
    cin >> message;

    std::cout << "Deciphered message: " << decipher(cipher_map1, cipher_map2, message) << std::endl;
}