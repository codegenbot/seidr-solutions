#include <vector>
#include <iostream>
#include <string>

std::string substituteCipher(const std::string& cipher1, const std::string& cipher2, const std::string& message) {
    std::string result;
    for (char c : message) {
        for (int i = 0; i < cipher1.length(); i++) {
            if (c == cipher1[i]) {
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
    std::cout << substituteCipher(cipher1, cipher2, message) << std::endl;
    return 0;
}