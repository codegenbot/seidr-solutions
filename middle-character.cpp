#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;
    int len = s.length();
  
    if (len % 2 == 1) {
        std::cout << s.substr(len / 2, 1);
    } else {
        std::cout << s.substr(len / 2 - 1, 2);
    }
  
    return 0;
}