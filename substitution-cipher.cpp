#include <vector>
#include <iostream>
#include <string>

std::string substitutionCipher(const std::string& key1, const std::string& key2, const std::string& text) {
    std::string result;
    for (char c : text) {
        if (c == '\0') break; // in case of null termination
        int index = 0;
        while (index < key1.length() && c != key1[index]) {
            index++;
        }
        if (index < key2.length()) {
            result += key2[index];
        } else {
            result += c; // if character not found in key, leave it as is
        }
    }
    return result;
}

int main() {
    std::string key1, key2, text;
    std::cin >> key1 >> key2 >> text;
    std::cout << substitutionCipher(key1, key2, text) << std::endl;
    return 0;
}