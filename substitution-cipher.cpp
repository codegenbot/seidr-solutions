#include <vector>
#include <iostream>
#include <string>

std::string substituteCipher(const std::string& cipher1, const std::string& cipher2, const std::string& message) {
    std::string decipheredMessage;
    
    for (char c : message) {
        bool found = false;
        for (int i = 0; i < cipher1.length(); i++) {
            if (c == cipher1[i]) {
                decipheredMessage += cipher2[i];
                found = true;
                break;
            }
        }
        
        if (!found) {
            decipheredMessage += c;
        }
    }
    
    return decipheredMessage;
}

int main() {
    std::string cipher1, cipher2, message;
    std::cin >> cipher1 >> cipher2 >> message;
    std::cout << substituteCipher(cipher1, cipher2, message) << std::endl;
    return 0;
}