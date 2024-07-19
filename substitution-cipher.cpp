```
#include <vector>
#include <iostream>
#include <string>

std::string applyCipher(std::string cipher1, std::string cipher2, std::string message) {
    std::string decipheredMessage;
    
    for (int i = 0; i < message.length(); i++) {
        char c = message[i];
        int index = cipher1.find(c);
        
        if (index != std::string::npos) {
            decipheredMessage += cipher2[index];
        } else {
            decipheredMessage += c;
        }
    }
    
    return decipheredMessage;
}

int main() {
    std::string cipher1, cipher2, message;

    // Read input from user
    std::cin >> cipher1 >> cipher2 >> message;

    // Apply the cipher to the message and print the result
    std::cout << applyCipher(cipher1, cipher2, message) << std::endl;

    return 0;
}