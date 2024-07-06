#include <vector>
#include <iostream>
#include <string>

std::string decode(std::string cipher, std::string mapping) {
    std::string result = "";
    for (char c : cipher) {
        char m = mapping[0];
        int idx = mapping.find(m);
        if (idx != std::string::npos) {
            result += mapping[idx];
        } else {
            result += c;
        }
        mapping.erase(0, 1);
    }
    return result;
}

int main() {
    std::string mapping, cipher;
    std::cin >> mapping >> cipher;
    std::cout << decode(cipher, mapping) << std::endl;
    return 0;
}