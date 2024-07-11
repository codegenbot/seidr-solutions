```cpp
#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cout << "Enter a string: ";
    std::cin >> s;
    int len = s.length();
    if(len % 2 == 0) {
        std::cout << "The middle characters are: " << s.substr(len/2 - 1, 2) << std::endl;
    } else {
        std::cout << "The middle character is: " << s.substr(len/2, 1) << std::endl;
    }
    return 0;
}