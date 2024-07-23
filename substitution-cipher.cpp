#include <vector>
#include <iostream>
#include <string>
#include <unordered_map>

std::string substitutionCipher(const std::string& cipher1, const std::string& cipher2, const std::string& input) {
    std::unordered_map<char, char> mapping;
    for (size_t i = 0; i < cipher1.size(); ++i) {
        mapping[cipher2[i]] = cipher1[i];
    }
    std::string result;
    for (char c : input) {
        if (c == '\0') {
            break; // if the end of string is reached
        }
        auto mapIt = mapping.find(c);
        if (mapIt != mapping.end()) {
            result += mapIt->second; 
        } else {
            result += c; // if not found, add as it is
        }
    }
    return result;
}

int main() {
    std::string cipher1, cipher2, input;
    std::cin >> cipher1 >> cipher2 >> input;
    std::cout << substitutionCipher(cipher1, cipher2, input) << std::endl;
    return 0;
}