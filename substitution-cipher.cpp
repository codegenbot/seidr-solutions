#include <vector>
#include <iostream>
#include <string>

std::string decipher(std::string cipher1, std::string cipher2, std::string message) {
    std::string deciphered = "";
    
    for (int i = 0; i < message.length(); i++) {
        for (int j = 0; j < cipher1.length(); j++) {
            if (message[i] == cipher1[j]) {
                deciphered += cipher2[j];
                break;
            }
        }
    }
    
    return deciphered;
}

int main() {
    std::string cipher1, cipher2, message;
    std::cin >> cipher1 >> cipher2 >> message;
    std::cout << decipher(cipher1, cipher2, message) << std::endl;
    return 0;
}