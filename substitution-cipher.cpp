#include <vector>
#include <iostream>
#include <string>

std::string decipher(std::string key1, std::string key2, std::string message) {
    string result = "";
    for(int i = 0; i < message.length(); i++) {
        for(int j = 0; j < key1.length(); j++) {
            if(key1[j] == message[i]) {
                result += key2[j];
                break;
            }
        }
    }
    return result;
}

int main() {
    std::string key1, key2, message;
    std::cout << "Enter the first string of the cipher: ";
    std::cin >> key1;
    std::cout << "Enter the second string of the cipher: ";
    std::cin >> key2;
    std::cout << "Enter the message to decipher: ";
    std::cin >> message;
    std::cout << "Deciphered message is: " << decipher(key1, key2, message) << std::endl;
    return 0;
}