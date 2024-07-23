#include <vector>
#include <iostream>
#include <string>

std::string substitutionCipher(const std::string& cipher1, const std::string& cipher2, const std::string& input) {
    std::string result;
    for (char c : input) {
        size_t pos = cipher2.find(std::string(1, c)); // modified this line
        if (pos != std::string::npos) {
            result += cipher1[pos]; 
        } else {
            result += c; 
        }
    }
    return result;
}

int main() {
    std::string cipher1, cipher2, input;
    std::cin >> cipher1 >> cipher2 >> input;
    std::cout << substitutionCipher(cipher1, cipher2, input) << std::endl;
    return 0;
}