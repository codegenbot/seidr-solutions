#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cin >> input;
    
    std::string output = "";
    for (char digit : input) {
        int num = digit - '0';
        output += std::to_string(num * num);
    }
    
    std::cout << output << std::endl;
    
    return 0;
}