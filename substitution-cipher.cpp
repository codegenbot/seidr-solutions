```cpp
#include <iostream>
#include <string>

std::string substitutionCipher(string cipher1, string cipher2, string message);

int main() {
    std::string cipher1, cipher2, message;
    std::getline(std::cin, cipher1); 
    std::getline(std::cin, cipher2);
    std::getline(std::cin, message);
    std::cout << substitutionCipher(cipher1, cipher2, message) << std::endl; 
    return 0;
}

std::string substitutionCipher(string cipher1, string cipher2, string message) {
    std::string result = "";
    for (char c : message) {
        int offset = isalpha(c) ? (c >= 'A' && c <= 'Z') ? 0 : ('a' - c + 10) : 0;
        if(isalpha(c)) {
            if(c >= 'A' && c <= 'Z')
                result += cipher2[(c - 'A')];
            else
                result += cipher2[(c - 'a') % 26];
        } 
        else
            result += c;
    }
    return result;
}