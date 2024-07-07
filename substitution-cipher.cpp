```
#include <string>
#include <iostream>

std::string decode(std::string cipher, std::string mapping) {
    std::string result = "";
    for (char c : cipher) {
        int idx = mapping.find(c);
        if (idx != std::string::npos) {
            result.push_back(mapping[idx]); 
        } else {
            result.push_back(c); 
        }
    }
    return result;
}

int main() {
    std::string cipher, mapping;
    std::cout << "Enter the cipher: ";
    std::cin >> cipher;
    std::cout << "Enter the mapping: ";
    std::cin >> mapping;
    std::cout << decode(cipher, mapping) << std::endl;
    return 0;
}