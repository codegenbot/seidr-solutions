```c++
#include <string>
#include <iostream>

std::string middleCharacterHelper(std::string str) {
    int len = str.length();
    if(len % 2 == 0){
        return str.substr(len/2-1, 2);
    } else{
        return std::string(1, str[len/2]);
    }
}

int main() {
    std::cout << middleCharacterHelper("abcdef") << std::endl;
    return 0;
}