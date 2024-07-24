#include <vector>
#include <iostream>
#include <string>

std::string applySubstitutionCipher(const std::string& cipher1, const std::string& cipher2, const std::string& message) {
    string result = "";
    for (char c : message) {
        if (c == '\n') {
            result += '\n';
        } else {
            int index = c - 'a';
            result += cipher2[index];
        }
    }
    return result;
}

int main() {
    std::string cipher1, cipher2, message;
    std::cin >> cipher1 >> cipher2 >> message;
    std::cout << applySubstitutionCipher(cipher1, cipher2, message) << std::endl;
    return 0;
}