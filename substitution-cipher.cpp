```cpp
#include <iostream>
#include <string>

int main() {
    std::string cipher1, cipher2, input;
    
    // Read input from user
    std::cout << "Enter the first cipher: ";
    std::getline(std::cin, cipher1);
    std::cout << "Enter the second cipher: ";
    std::getline(std::cin, cipher2);
    std::cout << "Enter the message to decipher: ";
    std::getline(std::cin, input);

    for (char c : input) {
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

    return 0;
}