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
    std::string cipherMap = "abcdefghijklmnopqrstuvwxyz"; // replace with actual cipher map
    std::string input = "hello"; // replace with actual input string

    std::string output = substitutionCipher(cipherMap, input);
    std::cout << output << std::endl;

    return 0;
}