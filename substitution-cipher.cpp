#include <vector>
#include <iostream>
#include <string>

std::string decipher(const std::string& cipherText, const std::string& mapping) {
    std::string deciphered = "";
    for (char c : cipherText) {
        int idx = mapping.find(c);
        if (idx != std::string::npos) {
            deciphered += mapping[idx];
        } else {
            deciphered += c; // If the character is not found in the mapping, leave it as it is
        }
    }
    return deciphered;
}

int main() {
    std::string cipherText1, cipherText2, deciphered;
    std::cout << "Enter the first two strings (cipher): ";
    std::cin >> cipherText1 >> cipherText2;
    std::cout << "Enter the string to be deciphered: ";
    std::cin >> deciphered;

    std::string mapping = "";
    for (char c : cipherText1) {
        if (!mapping.empty() && mapping[mapping.size()-1] == c) {
            break; // We have reached the end of the mapping
        }
        mapping += c;
    }

    std::cout << "Deciphered message: " << decipher(deciphered, mapping) << std::endl;

    return 0;
}