#include <vector>
#include <iostream>
#include <string>

std::string decipher(std::string key1, std::string key2, std::string message) {
    string result = "";
    for (int i = 0; i < message.length(); i++) {
        if (i < key1.length()) {
            int index = key1.find(message[i]);
            if (index != std::string::npos)
                result += key2[index];
            else
                result += message[i]; // If the character is not in the cipher, add it to the result as is.
        } else {
            result += message[i]; // If the character is beyond the length of the key, add it to the result as is.
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