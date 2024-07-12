#include <iostream>
#include <string>
#include <algorithm>

std::string decipher(std::string cipher1, std::string cipher2, std::string message) {
    std::string result = "";
    char current_char = 'a'; // Initialize with a default character
    for (int i = 0; i < message.length(); i++) {
        int index = 0;
        while (index < cipher2.length() && cipher2[index] != message[i]) {
            index++;
        }
        if (index < cipher2.length()) {
            result += cipher1[std::distance(cipher2.begin(), std::find(cipher2.begin(), cipher2.end(), message[i]))];
        } else {
            result += message[i];
        }
    }
    return result;
}

int main() {
    std::string cipher1, cipher2, message;
    std::cout << "Enter the first string: ";
    std::cin >> cipher1;
    std::cout << "Enter the second string: ";
    std::cin >> cipher2;
    std::cout << "Enter the message to decipher: ";
    std::cin >> message;
    std::cout << "Deciphered message: " << decipher(cipher1, cipher2, message) << std::endl;
    return 0;
}