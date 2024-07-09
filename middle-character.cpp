#include <iostream>
#include <string>

std::string middleCharacter(std::string s) {
    int n = s.length();
    std::string result = "";
    if(n % 2 == 1) {
        result = s.substr(n / 2, 1);
    } else {
        result = s.substr((n / 2) - 1, 2);
    }
    return result;
}

int main() {
    std::string str;
    std::getline(std::cin, str);
    std::cout << middleCharacter(str) << std::endl;
    return 0;
}