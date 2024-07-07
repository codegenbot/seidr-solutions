#include <iostream>
#include <string>

int main() {
    std::string s;
    int len;
    
    std::cout << "Enter a string: ";
    std::getline(std::cin, s);
    
    len = s.length();
    if (len % 2 == 1) {
        return std::to_string(s[len / 2]);
    } else {
        return (s[(len - 1) / 2] + s[len / 2]).c_str();
    }
}