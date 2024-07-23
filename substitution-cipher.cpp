#include <vector>
#include <iostream>
#include <string>

std::string substitutionCipher(const std::string& cipher1, const std::string& cipher2, const std::string& message) {
    std::string decipheredMessage;
    for (char c : message) {
        char found = '0';
        for (int i = 0; i < cipher1.length(); ++i) {
            if (cipher1[i] == c) {
                found = c;
                break;
            }
        }
        decipheredMessage += (found != '0') ? cipher2[std::tolower(cipher1).find(found)] : c;
    }
    return decipheredMessage;
}

int main() {
    std::string cipher1, cipher2, message;
    std::cin >> cipher1 >> cipher2 >> message;
    std::cout << substitutionCipher(cipher1, cipher2, message) << std::endl;
    return 0;
}