#include <iostream>
#include <string>

std::string decode(std::string cipher, std::string mapping) {
    std::string result = "";
    for (char c : cipher) {
        int idx = mapping.find(c);
        if (idx != std::string::npos) {
            char m = mapping[idx];
            result += m;
        } else {
            result += c; 
        }
    }
    return result;
}

int main() {
    std::string cipher, mapping;
    std::cout << "Enter the cipher: ";
    std::getline(std::cin, cipher);
    std::cout << "Enter the mapping: ";
    std::getline(std::cin, mapping);

    std::cout << "Decrypted message: " << decode(cipher, mapping) << std::endl;

    return 0;
}