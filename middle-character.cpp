#include <iostream>
#include <string>

std::string middleCharacter(std::string s) {
    int n = s.size();
    if (n % 2 == 0) {
        return s.substr(n/2 - 1, 2);
    } else {
        return s.substr(n/2, 1);
    }
}

int main() {
    std::string s;
    std::cin >> s;
    std::cout << middleCharacter(s) << std::endl;
    return 0;
}