#include <vector>
#include <iostream>
#include <string>

std::string substitutionCipher(std::string cipher1, std::string cipher2, std::string message) {
    std::string decipheredMessage;
    
    for (int i = 0; i < message.length(); i++) {
        if (i < cipher1.length()) {
            int index = cipher1.find(message[i]);
            if (index != -1) {
                decipheredMessage += cipher2[index];
            } else {
                decipheredMessage += message[i];
            }
        } else {
            decipheredMessage += message[i];
        }
    }
    
    return decipheredMessage;
}

int main() {
    std::string cipher1, cipher2, message;
    std::cout << "Enter the first string of the cipher: ";
    std::cin >> cipher1;
    std::cout << "Enter the second string of the cipher: ";
    std::cin >> cipher2;
    std::cout << "Enter the message to be deciphered: ";
    std::cin >> message;
    
    std::cout << "Deciphered Message: " << substitutionCipher(cipher1, cipher2, message) << std::endl;
    
    return 0;
}