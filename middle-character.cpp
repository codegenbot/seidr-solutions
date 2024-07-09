#include <iostream>
#include <string>

std::string middleCharacter(std::string s) {
    int n = s.length();
    std::string result = "";
    if(n % 2 == 1) {
        result = s.substr(n / 2, 1);
    } else {
        result = s.substr(n / 2 - 1, 2); 
    }
    return result;
}

int main() {
    while(true) {
        std::string str;
        std::cout << "Enter a string: ";
        std::getline(std::cin, str);
        std::cout << middleCharacter(str) << std::endl;
    }
    return 0;
}