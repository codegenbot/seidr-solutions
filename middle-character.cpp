```cpp
#include <string>

int main() {
    std::string s;
    std::cout << "Enter a string: ";
    std::getline(std::cin, s);
    int len = s.length();
    std::string result = len % 2 == 0 ? s.substr(len/2 - 1, 2) : s.substr(len/2 - 1, len%2==0 ? 2 : 1);
    std::cout << "Middle character(s): " << result << std::endl;
    return 0;
}