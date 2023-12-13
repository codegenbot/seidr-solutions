```cpp
#include <iostream>
#include <string>

std::string middleCharacter(std::string str) {
    int len = str.length();
    if (len % 2 == 1) {
        return std::string(1, str[len/2]);
    } else {
        return str.substr((len/2)-1, 2);
    }
}

int main() {
    std::string input;
    getline(std::cin, input);
    std::cout << middleCharacter(input) << std::endl;
    return 0;
}
```