#include <unordered_map>
#include <iostream>
#include <string>

std::string decode(std::string cipher, std::string mapping) {
    std::unordered_map<char, char> decryptMap;
    for (int i = 0; i < mapping.size(); ++i) {
        decryptMap[cipher[i]] = mapping[i];
    }
    std::string result = "";
    for (char c : cipher) {
        if (decryptMap.find(c) != decryptMap.end()) {
            result += decryptMap[c];
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    std::string cipher, mapping;
    std::cin >> cipher >> mapping;
    std::cout << decode(cipher, mapping) << std::endl;
    return 0;
}