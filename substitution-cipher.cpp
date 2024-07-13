#include <vector>
#include <iostream>
#include <string>

std::string decipher(const std::string& cipher, const std::string& mapping) {
    std::string result;
    for (char c : cipher) {
        int index = c - 'a';
        if (index >= 0 && index < mapping.length()) {
            result += mapping[index];
        } else {
            result += c; // or throw an exception, depending on your needs
        }
    }
    return result;
}

int main() {
    std::string cipher1, cipher2, message;
    std::cin >> cipher1 >> cipher2 >> message;
    std::cout << decipher(message, cipher2) << std::endl;
    return 0;
}