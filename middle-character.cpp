#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;
    
    int middle = s.size() / 2;
    if (s.size() % 2 == 0) {
        std::cout << s.substr(middle - 1, 2);
    } else {
        std::cout << s[middle];
    }
    
    return 0;
}