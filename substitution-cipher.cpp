#include <vector>
#include <iostream>
#include <string>

std::string decode(std::string cipher, std::string mapping) {
    std::string result = "";
    for (char c : cipher) {
        int idx = mapping.find(c);
        if (idx != std::string::npos) {
            result += mapping[idx];
        } else {
            result += c;
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