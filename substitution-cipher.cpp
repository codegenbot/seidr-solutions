#include <vector>
#include <iostream>
#include <string>

std::string substitutionCipher(const std::string& key1, const std::string& key2, const std::string& message) {
    std::string result;
    for (char c : message) {
        if (c == '\0') break;  
        size_t pos = 0;
        while (pos < key1.size() && key1[pos] != c) {
            pos++;
        }
        if (pos >= key1.size()) {
            result += c;  
        } else {
            result += key2[pos];  
        }
    }
    return result;
}

int main() {
    std::string key1, key2, message;
    std::getline(std::cin, key1);
    std::getline(std::cin, key2);
    std::getline(std::cin, message);
    std::cout << substitutionCipher(key1, key2, message) << std::endl;
    return 0;
}