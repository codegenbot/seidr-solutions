#include <iostream>
#include <string>

std::string middleCharacter(std::string s) {
    int n = s.length();
    std::string result = "";
    if(n % 2 == 1) {
        result = s.substr(n / 2, 1);
    } else {
        result = s.substr((n - 1) / 2, 2);
    }
    return result;
}

int main() {
    std::string str;
    std::cin.getline(&str[0], 256);
    std::cout << middleCharacter(str) << std::endl;
    return 0;
}