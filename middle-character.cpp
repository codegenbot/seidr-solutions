#include <string>

std::string middleCharacter(std::string s) {
    int len = s.length();
    return len % 2 == 0 ? s.substr(len / 2 - 1, 2) : s.substr(len / 2, 1);
}

int main() { 
    std::cout << middleCharacter(std::string("your_test_string")); 
    return 0; 
}