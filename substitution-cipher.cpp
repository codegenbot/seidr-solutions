#include <iostream>
#include <string>

std::string substitutionCipher(const std::string& cipher, const std::string& decipher, const std::string& message) {
    std::string result = "";
    for (char c : message) {
        size_t index = cipher.find(c);
        if (index != std::string::npos) {
            result += decipher[index];
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    std::string cipher, decipher, message;
    std::cin >> cipher >> decipher >> message;
    std::cout << substitutionCipher(cipher, decipher, message) << std::endl;
    return 0;
}