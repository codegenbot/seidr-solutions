#include <vector>
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
            result += c;
        }
    }
    return result;
}

int main() {
    std::string cipher1, cipher2, message;
    std::cout << "Enter the first cipher string: ";
    std::cin >> cipher1;
    std::cout << "Enter the second cipher string: ";
    std::cin >> cipher2;
    std::cout << "Enter the message to decipher: ";
    std::cin >> message;
    std::cout << "Deciphered message: " << substitutionCipher(cipher1, cipher2, message) << std::endl;
    return 0;