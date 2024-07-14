#include <string>
#include <iostream>

std::string middleCharacter(std::string s) {
    int len = s.length();
    int mid = (len - 1) / 2;
    if (len % 2 == 0) {
        return s.substr(mid, 2);
    } else {
        return s.substr(mid, 1);
    }
}

int main() {
    std::string s;
    // get input from user or use a sample string for testing
    s = "hello";
    std::cout << middleCharacter(s) << std::endl;
    return 0;
}