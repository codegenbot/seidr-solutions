#include <vector>
#include <iostream>
#include <string>

std::string substitutionCipher(std::string cipher1, std::string cipher2, std::string message) {
    std::string decipheredMessage = "";
    
    for (int i = 0; i < message.length(); i++) {
        if (cipher1[i] == message[i]) {
            int index = cipher1.find(message[i]);
            decipheredMessage += cipher2[index];
        } else {
            decipheredMessage += message[i];
        }
    }
    
    return decipheredMessage;
}

int main() {
    std::string cipher1, cipher2, message;
    std::cout << "Enter the first string: ";
    std::cin >> cipher1;
    std::cout << "Enter the second string: ";
    std::cin >> cipher2;
    std::cout << "Enter the message to be deciphered: ";
    std::cin >> message;
    
    std::string decipheredMessage = substitutionCipher(cipher1, cipher2, message);
    
    std::cout << "Deciphered Message: " << decipheredMessage << std::endl;
    
    return 0;
}