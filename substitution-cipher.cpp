#include <vector>
#include <iostream>
#include <string>

std::string substituteCipher(std::string cipher1, std::string cipher2, std::string message) {
    std::string decipheredMessage;
    
    for (int i = 0; i < message.length(); i++) {
        int index = message[i];
        decipheredMessage += cipher2[index];
    }
    
    return decipheredMessage;
}

int main() {
    // Read input from user
    std::string cipher1, cipher2, message;
    std::cin >> cipher1 >> cipher2 >> message;

    // Apply the cipher to the message and print the result
    std::cout << substituteCipher(cipher1, cipher2, message) << std::endl;

    return 0;
}