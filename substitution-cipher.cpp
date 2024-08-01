#include <vector>
#include <iostream>
#include <string>

std::string substituteCipher(const std::string& cipher1, const std::string& cipher2, const std::string& message) {
    std::string result = "";
    for (char c : message) {
        int index = c - 'a';
        if (index >= 0 && index < cipher1.size()) {
            result += cipher2[index];
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    std::string cipher1, cipher2, message;
    std::cin >> cipher1 >> cipher2 >> message;
    std::cout << substituteCipher(cipher1, cipher2, message) << std::endl;
    return 0;
}