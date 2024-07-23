```cpp
#include <iostream>
#include <string>

std::string substitutionCipher(const std::string& cipher1, const std::string& cipher2, const std::string& input) {
    std::string result;
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
    return result;
}

int main() {
    std::string cipher1, cipher2, input;
    // get the strings from user
    std::cin >> cipher1 >> cipher2 >> std::getline(std::cin, input);
    // use your function here
    std::cout << substitutionCipher(cipher1, cipher2, input) << std::endl;
    return 0;
}