#include <vector>
#include <iostream>
#include <string>

std::string decipher(std::string cipher1, std::string cipher2, std::string message) {
    std::string result = "";
    for (int i = 0; i < message.length(); i++) {
        char c = tolower(message[i]); // Convert to lowercase or uppercase based on your requirement
        if (c >= 'a' && c <= 'z') {
            int index = c - 'a';
            if (index >= 0 && index < cipher1.length()) {
                result += cipher2[index];
            } else {
                result += c; // If the character is not found in the cipher, append it as it is
            }
        } else {
            result += message[i]; // For non-alphabetic characters, just add them to the result
        }
    }
    return result;
}

int main() {
    std::string cipher1, cipher2, message;
    std::cin >> cipher1 >> cipher2 >> message;
    std::cout << decipher(cipher1, cipher2, message) << std::endl;
    return 0;
}