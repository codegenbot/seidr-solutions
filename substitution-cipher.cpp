```cpp
#include <vector>
#include <iostream>
#include <string>

std::string substitutionCipher(const std::string& cipherMap, const std::string& text) {
    std::string result;
    for (char c : text) {
        size_t pos = 0;
        while ((pos = cipherMap.find(c, pos)) != std::string::npos) {
            result += cipherMap.at(pos);
            pos += 1;
        }
        if (std::isalpha(c)) {
            if (c >= 'a' && c <= 'z') {
                if (c > 'x') {
                    for (char i = 'a'; i <= c; ++i) {
                        result += i;
                    }
                } else {
                    for (char i = 'a'; i <= 'x'; ++i) {
                        result += i;
                    }
                }
            } 
            else if (c >= 'A' && c <= 'Z') {
                if (c > 'X') {
                    for (char i = 'A'; i <= c; ++i) {
                        result += i;
                    }
                } else {
                    for (char i = 'A'; i <= 'X'; ++i) {
                        result += i;
                    }
                }
            }
        } 
        else 
            result += c;
    }
    return result;
}

int main() {
    std::string cipherMap, text;
    std::cin >> cipherMap >> text;
    std::cout << substitutionCipher(cipherMap, text) << std::endl;
    return 0;
}