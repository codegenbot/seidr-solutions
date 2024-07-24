#include <vector>
#include <iostream>
#include <string>

std::string applySubstitutionCipher(const std::string& cipher1, const std::string& cipher2, const std::string& message) {
    std::string decipheredMessage;
    for (char c : message) {
        int index = 0;
        for (int i = 0; i < cipher1.length(); ++i) {
            if (cipher1[i] == c) {
                index = i;
                break;
            }
        }
        if (index != std::string::npos) {
            decipheredMessage += cipher2[index];
        } else {
            decipheredMessage += c;
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