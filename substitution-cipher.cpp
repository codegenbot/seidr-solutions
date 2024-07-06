#include <vector>
#include <iostream>
#include <string>

std::string decode(std::string cipher, std::string mapping) {
    std::string result = "";
    int m_idx = 0; // Index of current char in mapping
    for (char c : cipher) {
        while (m_idx < mapping.length() && c != mapping[m_idx]) {
            ++m_idx;
        }
        if (m_idx < mapping.length()) {
            result += mapping[m_idx];
            ++m_idx;
        } else {
            result += c; // If character not found in map, add it to the result
        }
    }
    return result;
}

int main() {
    std::string mapping, cipher;
    std::cin >> mapping >> cipher;
    std::cout << decode(cipher, mapping) << std::endl;
    return 0;
}