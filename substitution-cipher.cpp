#include <vector>
#include <iostream>
#include <string>

std::string substitutionCipher(const std::string& cipher1, const std::string& cipher2, const std::string& message) {
    std::string result;
    for (char c : message) {
        if (isalpha(c)) { 
            int index = (tolower(c) - 'a'); 
            if (index >= 0 && index < cipher1.size()) {
                char substitution = isupper(c) ? toupper(cipher2[index]) : tolower(cipher2[index]);
                result += substitution;
            } else {
                result += c; 
            }
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    std::string cipher1, cipher2, message;
    std::cin >> cipher1 >> cipher2 >> message;
    std::cout << substitutionCipher(cipher1, cipher2, message) << std::endl;
    return 0;
}