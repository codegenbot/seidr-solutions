```c++
#include <vector>
#include <iostream>
#include <string>

std::string decipher(std::string key1, std::string key2, std::string message) {
    std::string result = "";
    for (int i = 0; i < message.length(); i++) {
        int index = key2.find(message[i]);
        if (index != std::string::npos) {
            if(i < key1.length())
                result += key1[index];
            else
                result += message[i]; 
        } else {
            result += message[i]; 
        }
    }
    return result;
}

int main() {
    std::string key1, key2, message;
    std::cout << "Enter the first string (key): ";
    std::cin >> key1;
    std::cout << "Enter the second string: ";
    std::cin >> key2;
    std::cout << "Enter the message to decipher: ";
    std::cin >> message;
    std::cout << "Deciphered message: " << decipher(key1, key2, message) << std::endl;
    return 0;
}