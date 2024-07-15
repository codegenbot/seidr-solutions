#include <vector>
#include <iostream>
#include <string>

std::string substitutionCipher(const std::string& key1, const std::string& key2, const std::string& message) {
    std::string result;
    for (char c : message) {
        if (c == '\0') break;  // Assuming the input strings are null-terminated
        size_t pos = 0;
        while (pos < key1.size() && key1[pos] != c) {
            pos++;
        }
        if (pos >= key1.size()) {
            result += c;  // If character is not in key, leave it as is
        } else {
            result += key2[pos];  // Replace with corresponding character from key2
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