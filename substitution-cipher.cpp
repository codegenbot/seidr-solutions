#include <vector>
#include <iostream>
#include <string>

std::string substitutionCipher(const std::string& cipher1, const std::string& cipher2, const std::string& message) {
    std::string result;
    
    // Iterate over each character in the message
    for (char c : message) {
        // Find the corresponding character in cipher2 that matches the current character in cipher1
        for (int i = 0; i < cipher1.length(); i++) {
            if (cipher1[i] == c) {
                result += cipher2[i];
                break;
            }
        }
    }
    
    return result;
}

int main() {
    std::string cipher1, cipher2, message;
    std::cin >> cipher1 >> cipher2 >> message;
    std::cout << substitutionCipher(cipher1, cipher2, message) << std::endl;
    return 0;
}