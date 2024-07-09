#include <vector>
#include <iostream>
#include <string>

std::string substituteCipher(const std::string& cipher1, const std::string& cipher2, const std::string& message) {
    string result = "";
    for (char c : message) {
        int index = cipher1.find(c);
        if (index != std::string::npos) {
            result += cipher2[index];
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    std::string cipher1, cipher2, message;
    std::cout << "Enter the first string: ";
    std::cin >> cipher1;
    std::cout << "Enter the second string: ";
    std::cin >> cipher2;
    std::cout << "Enter the message to be deciphered: ";
    std::cin >> message;
    std::cout << substituteCipher(cipher1, cipher2, message) << std::endl;
    return 0;
}