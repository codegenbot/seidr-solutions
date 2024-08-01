#include <vector>
#include <iostream>
#include <string>

std::string applySubstitutionCipher(const std::string& cipher1, const std::string& cipher2, const std::string& message) {
    std::string decipheredMessage;
    
    for (char c : message) {
        int index = c - 'a';
        if (index >= 0 && index < cipher1.size()) {
            decipheredMessage += cipher2[index];
        } else {
            decipheredMessage += c; // leave non-alphabet characters unchanged
        }
    }
    
    return decipheredMessage;
}

int main() {
    std::string cipher1, cipher2, message;
    std::cin >> cipher1 >> cipher2 >> message;
    std::cout << applySubstitutionCipher(cipher1, cipher2, message) << std::endl;
    return 0;
}