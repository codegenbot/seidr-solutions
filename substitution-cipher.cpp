#include <vector>
#include <iostream>
#include <string>

std::string substitutionCipher(const std::string& cipher1, const std::string& cipher2, const std::string& message) {
    std::string decipheredMessage;
    
    for (char c : message) {
        if (c == '\0') break;  // assuming null character marks the end of input
        for (int i = 0; i < cipher1.length(); ++i) {
            if (cipher1[i] == c) {
                decipheredMessage += cipher2[i];
                break;
            }
        }
    }
    
    return decipheredMessage;
}

int main() {
    std::string cipher1, cipher2, message;
    std::cin >> cipher1 >> cipher2 >> message;
    std::cout << substitutionCipher(cipher1, cipher2, message) << std::endl;
    return 0;
}