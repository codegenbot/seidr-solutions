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
        if (!std::isalpha(c)) {
            result += c; // if the character is not a letter (like space or punctuation), keep it
        } else {
            if (c >= 'a' && c <= 'z') {
                char start = 'a';
                while ((start <= c && cipherMap.find(start, 0) != std::string::npos) || (c < start && cipherMap.find(toupper(start), 0) != std::string::npos)) {
                    start += 1;
                }
                if (c >= 'a' && c <= 'z') {
                    result += ('a' + (c - 'a' + cipherMap.at(pos % cipherMap.length()) - 'a')) % 26;
                } else {
                    result += toupper(('a' + (c - 'a' + cipherMap.at(pos % cipherMap.length()) - 'a')) % 26);
                }
            } else if (c >= 'A' && c <= 'Z') {
                char start = 'A';
                while ((start <= c && cipherMap.find(start, 0) != std::string::npos) || (c < start && cipherMap.find(toupper(start), 0) != std::string::npos)) {
                    start += 1;
                }
                result += toupper(('A' + (c - 'A' + cipherMap.at(pos % cipherMap.length()) - 'A')) % 26);
            } else {
                result += c; // if the character is not a letter, keep it
            }
        }
    }
    return result;
}

int main() {
    std::string cipherMap, text;
    std::cin >> cipherMap >> text;
    std::cout << substitutionCipher(cipherMap, text) << std::endl;
    return 0;
}