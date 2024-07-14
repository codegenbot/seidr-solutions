#include <vector>
#include <iostream>
#include <string>

std::string decipher(std::string cipher1, std::string cipher2, std::string message) {
    std::string result = "";
    int lowerIndex = 0;
    int upperIndex = 0;
    for (char c : message) {
        if (c >= 'a' && c <= 'z') { 
            while (lowerIndex < cipher1.length() && tolower(c) != tolower(cipher1[lowerIndex])) {
                lowerIndex++;
            }
            if (lowerIndex < cipher1.length()) {
                result += tolower(cipher2[lowerIndex]); 
            } else {
                result += c; 
            }
        } else if (c >= 'A' && c <= 'Z') { 
            while (upperIndex < cipher1.length() && toupper(c) != toupper(cipher1[upperIndex])) {
                upperIndex++;
            }
            if (upperIndex < cipher1.length()) {
                result += toupper(cipher2[upperIndex]); 
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
    std::cout << decipher(cipher1, cipher2, message) << std::endl;
    return 0;
}