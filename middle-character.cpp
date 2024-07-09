```c
#include <string>
#include <iostream>

std::string middleCharacter(std::string s) {
    int n = s.length();
    std::string result = "";
    if(n % 2 == 1) {
        result += s.substr((n-1)/2, 1);
    } else {
        result += s.substr(n/2 - 1, 1);
        result += s.substr(n/2, 1);
    }
    return result;
}

int main() {
    std::string s;
    std::cout << "Enter a string: ";
    std::getline(std::cin, s);
    std::cout << "Middle character(s): " << middleCharacter(s) << std::endl;
    return 0;
}