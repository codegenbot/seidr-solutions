#include <vector>
#include <iostream>
#include <string>

std::string substitutionCipher(const std::string& key1, const std::string& key2, const std::string& message) {
    std::string result;
    for (char c : message) {
        if (c == '\0') break; // to handle null character in input
        size_t index = 0;
        while (index < key1.length() && c != key1[index]) {
            ++index;
        }
        if (index < key2.length()) {
            result += key2[index];
        } else {
            result += c; // if the character is not found in key1, add it as is
        }
    }
    return result;
}

int main() {
    std::string key1, key2, message;
    std::cin >> key1 >> key2 >> message;
    std::cout << substitutionCipher(key1, key2, message) << std::endl;
    return 0;
}