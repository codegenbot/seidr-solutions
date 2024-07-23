#include <iostream>
#include <string>

std::string substitutionCipher(const std::string& cipher1, const std::string& cipher2, const std::string& message) {
    std::string result;
    for (char c : message) {
        bool found = false;
        for (int i = 0; i < cipher1.size(); i++) {
            if (c == cipher1[i]) {
                result += cipher2[i];
                found = true;
                break;
            }
        }
        if (!found) {
            result += c; // Add the character to the result if it's not in cipher1
        }
    }
    return result;
}

int main() {
    std::string cipher1, cipher2, message;
    std::cout << "Enter the first string of the cipher: ";
    std::cin >> cipher1;
    std::cout << "Enter the second string of the cipher: ";
    std::cin >> cipher2;
    std::cout << "Enter the message to be deciphered: ";
    std::cin >> message;
    std::string result = substitutionCipher(cipher1, cipher2, message);
    std::cout << "Deciphered message: " << result << std::endl;
    return 0;