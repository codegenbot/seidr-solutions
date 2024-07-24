#include <unordered_map>
#include <iostream>
#include <string>

std::string decipher(std::string cipher_map1, std::string cipher_map2, std::string message) {
    std::unordered_map<char, char> cipher;
    for (int i = 0; i < cipher_map1.length(); i++) {
        cipher[cipher_map1[i]] = cipher_map2[i];
    }
    
    std::string result;
    for (char c : message) {
        if (cipher.find(c) != cipher.end()) {
            result += cipher.at(c);
        } else {
            result += c; 
        }
    }
    
    return result;
}

int main() {
    std::string cipher_map1, cipher_map2, message;
    std::cout << "Enter the first string of the cipher: ";
    std::cin >> cipher_map1;
    std::cout << "Enter the second string of the cipher: ";
    std::cin >> cipher_map2;
    std::cout << "Enter the message to decipher: ";
    std::cin >> message;
    
    std::string result = decipher(cipher_map1, cipher_map2, message);
    std::cout << "Deciphered message: " << result << std::endl;

    return 0;
}