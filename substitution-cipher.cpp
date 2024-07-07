#include <iostream>
#include <string>

int main() {
    std::string cipher, mapping, decoded = "";
    std::cout << "Enter the cipher: ";
    std::getline(std::cin, cipher);
    std::cout << "Enter the mapping: ";
    std::getline(std::cin, mapping);
    
    for (char c : cipher) {
        int idx = mapping.find(c);
        if (idx != std::string::npos) {
            char m = mapping[idx];
            decoded += m;
        } else {
            decoded += c; 
        }
    }
    
    std::cout << "Decoded message: " << decoded << std::endl;
    return 0;
}