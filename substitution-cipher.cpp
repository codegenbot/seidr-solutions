#include <vector>
#include <iostream>
#include <string>

std::string decipher(std::string cipher1, std::string cipher2, std::string message) {
    std::string result = "";
    for (char c : message) {
        if (c >= 'a' && c <= 'z') { 
            int index = 0;
            while (index < cipher1.length() && tolower(c) != tolower(cipher1[index])) {
                index++;
            }
            if (index < cipher1.length()) {
                result += cipher2[index]; 
            } else {
                result += c; 
            }
        } else if (c >= 'A' && c <= 'Z') { // handle uppercase letters
            int index = 0;
            while (index < cipher1.length() && tolower(c) != tolower(cipher1[index])) {
                index++;
            }
            if (index < cipher1.length()) {
                result += toupper(cipher2[index]); 
            } else {
                result += c; 
            }
        } else { // handle spaces
            result += ' '; 
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