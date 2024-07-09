#include <iostream>
#include <string>

std::string middleCharacter(std::string s) {
    int n = s.length();
    std::string result = "";
    if(n % 2 == 1) {
        result += s.substr(n / 2, 1);
    } else {
        result += s.substr((n-1)/2, 1) + s.substr(n/2, 1);
    }
    return result;
}

int main() {
    std::string test = "hello";
    std::cout << middleCharacter(test) << std::endl; // prints "l"
    return 0;
}