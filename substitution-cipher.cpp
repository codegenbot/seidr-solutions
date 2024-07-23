```cpp
#include <iostream>
#include <string>

std::string substitutionCipher(const std::string& cipher1, const std::string& cipher2, const std::string& input) {
    std::string result;
    for (auto c : input) {
        if (c == '\0') {
            break; 
        }
        size_t pos = cipher2.find(std::tolower(c)); 
        if (pos != std::string::npos) {
            result += cipher1[pos]; 
        } else {
            char originalCase = (std::isupper(c)) ? std::toupper(c) : std::tolower(c);
            size_t pos2 = cipher1.find(originalCase); 
            if (pos2 != std::string::npos) {
                result += originalCase; 
            } else {
                result += c; 
            }
        }
    }
    return result;
}

int main() {
    // Example usage
    std::string cipher1, cipher2, input;
    std::cout << "Enter the first cipher string: ";
    std::getline(std::cin, cipher1);
    std::cout << "Enter the second cipher string: ";
    std::getline(std::cin, cipher2);
    std::cout << "Enter the input string to be deciphered: ";
    std::getline(std::cin, input);
    
    std::string decrypted = substitutionCipher(cipher1, cipher2, input);
    std::cout << "Decrypted message: " << decrypted << std::endl;
    
    return 0;
}