#include <iostream>
#include <string>

std::string substitutionCipher(const std::string& cipherMap, const std::string& input) {
    std::string output;
    for (char c : input) {
        char newChar = '\0';
        if (c >= 'a' && c <= 'z') {
            int index = tolower(c) - 'a';
            newChar = cipherMap[index];
        } else if (c >= 'A' && c <= 'Z') {
            int index = toupper(c) - 'A';
            newChar = toupper(cipherMap[index] - ('A' - 'a'));
        }
        output += (newChar == '\0') ? c : newChar;
    }
    return output;
}

int main() {
    std::string cipherMap = "abcdefghijklmnopqrstuvwxyz"; 
    std::string input;

    if(input.size() == 0) {
        std::cout << "No message to decipher." << std::endl;
    } else {
        std::cout << "Enter a message to decipher: ";
        std::cin >> input;
        std::string output = substitutionCipher(cipherMap, input);
        std::cout << "Deciphered message: " << output << std::endl;
    }

    return 0;
}