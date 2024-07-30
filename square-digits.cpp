#include <vector>
#include <iostream>
#include <string>

string squareDigits(string input) {
    string output = "";
    for (char c : input) {
        int num = c - '0';
        output += to_string(num * num);
    }
    return output;
}

int main() {
    std::cout << squareDigits("0") << std::endl; 
    std::cout << squareDigits("1") << std::endl; 
    std::cout << squareDigits("2") << std::endl; 
    std::cout << squareDigits("3") << std::endl; 
    std::cout << squareDigits("4") << std::endl;
    return 0;
}