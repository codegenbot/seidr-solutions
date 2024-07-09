#include <iostream>
#include <string>

std::string middleCharacter(std::string s) {
    int n = s.length();
    if(n % 2 == 1) {
        return s.substr(n / 2, 1);
    } else {
        return s.substr((n - 1) / 2, 2); 
    }
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    std::cout << middleCharacter(str) << std::endl;
    return 0;
}