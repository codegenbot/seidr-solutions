```c
#include <vector>
#include <iostream>
#include <string>

std::string substitutionCipher(std::string cipher1, std::string cipher2, std::string message) {
    std::string decipheredMessage;
    
    for (int i = 0; i < message.length(); i++) {
        if (message[i] == ' ') {
            decipheredMessage += ' ';
        } else {
            int index = message[i];
            if (index >= 65 && index <= 90) {
                // Convert ASCII value to uppercase
                index -= 65;
                decipheredMessage += std::toupper(cipher2[index]);
            } else if (index >= 97 && index <= 122) {
                // Convert ASCII value to lowercase
                index -= 97;
                decipheredMessage += cipher2[index];
            }
        }
    }
    
    return decipheredMessage;
}

int main() {
    std::string cipher1, cipher2, message;
    std::cin >> cipher1 >> cipher2 >> message;
    std::cout << std::endl; // add std::
    std::cout << substitutionCipher(cipher1, cipher2, message) << std::endl; // add std::
    return 0;
}