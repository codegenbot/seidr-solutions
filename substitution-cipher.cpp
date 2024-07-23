#include <iostream>
#include <string>

std::string substitutionCipher(std::string input, std::string cipher1, std::string cipher2) {
    std::string result = "";
    
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

    // Input your code here...

    if (!input.empty()) {
        std::cout << substitutionCipher(input, cipher1, cipher2) << "\n";
    } else {
        std::cout << "Error: input is empty.\n";
    }

    return 0;
}