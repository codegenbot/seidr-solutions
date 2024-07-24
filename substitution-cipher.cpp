```cpp
#include <iostream>
#include <string>

std::string decipher(const std::string& input, const std::string& cipher1, const std::string& cipher2) {
    std::string result;
    for (auto c : input) {
        if (c != '\0') { 
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
    }
    return result;
}

int main() {
    std::string input, cipher1, cipher2;

    std::cout << "Enter the three strings:" << std::endl;
    std::getline(std::cin, cipher1);
    std::cin.ignore();

    std::getline(std::cin, cipher2);
    std::cin.ignore();

    std::getline(std::cin, input);

    std::string result = decipher(input, cipher1, cipher2);
    std::cout << "Deciphered message: " << result << std::endl;
    
    return 0;
}