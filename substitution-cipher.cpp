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
        int offset = isupper(c) ? 0 : tolower(c) - 'a';
        if(isalpha(c)) {
            if(isupper(c))
                result += toupper(cipher2[offset]);
            else
                result += tolower(cipher2[offset]);
        } 
        else
            result += c;
    }
    return result;
}