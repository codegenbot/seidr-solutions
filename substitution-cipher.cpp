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
    std::string cipher_map1, cipher_map2, message;

    std::cout << "Enter the first map: ";
    getline(std::cin, quote);
    for(int i = 0; i < quote.length(); i++) 
        if(quote[i] == '"') quote.erase(i,"");
    for(int i = 0; i < quote.length(); i++) cipher_map1 += tolower((char)quote[i]);

    std::cout << "Enter the second map: ";
    getline(std::cin, quote);
    for(int i = 0; i < quote.length(); i++) 
        if(quote[i] == '"') quote.erase(i,"");
    for(int i = 0; i < quote.length(); i++) cipher_map2 += tolower((char)quote[i]);

    std::cout << "Enter the message to decipher: ";
    getline(std::cin, quote);
    for(int i = 0; i < quote.length(); i++) 
        if(quote[i] == '"') quote.erase(i,"");
    for(int i = 0; i < quote.length(); i++) message += (char)quote[i];

    std::cout << "Deciphered message: " << decipher(cipher_map1, cipher_map2, message) << std::endl;
}