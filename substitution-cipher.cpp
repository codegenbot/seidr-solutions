#include <vector>
#include <iostream>
#include <string>

std::string substitutionCipher(const std::string& key1, const std::string& key2, const std::string& message) {
    std::string result;
    for (int i = 0; i < message.size(); ++i) {
        if (key2[i] != '\0') {
            result += key1[i];
        } else {
            result += '#';
        }
    }
    return result;
}

int main() {
    std::string key1, key2, message;
    std::cout << "Enter the first key: ";
    std::cin >> key1;
    std::cout << "Enter the second key: ";
    std::cin >> key2;
    std::cout << "Enter the message to be deciphered: ";
    std::cin >> message;
    std::cout << substitutionCipher(key1, key2, message) << std::endl;
    return 0;
}