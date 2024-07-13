#include <vector>
#include <iostream>
#include <string>

std::string substitutionCipher(const std::string& cipher1, const std::string& cipher2, const std::string& message) {
    std::string result;
    for (char c : message) {
        if (c == '\0') break; // Check for null character
        int index = c - 'a'; // Calculate the index of the character in the alphabet
        if (index < 0 || index > 25) continue; // Ignore non-alphabet characters
        result += cipher2[index]; // Append the deciphered character to the result
    }
    return result;
}

int main() {
    std::string cipher1, cipher2, message;
    std::cin >> cipher1 >> cipher2 >> message;
    std::cout << substitutionCipher(cipher1, cipher2, message) << std::endl;
    return 0;
}