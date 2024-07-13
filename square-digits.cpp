#include <vector>
#include <iostream>
#include <string>

string squareDigits(string input) {
    string output = "";
    for (char c : input) {
        int num = (int)(c - '0');
        output += to_string(num * num);
    }
    return output;
}

int main() {
    std::cout << squareDigits("0") << "\n";
    std::cout << squareDigits("1") << "\n";
    std::cout << squareDigits("2") << "\n";
    std::cout << squareDigits("3") << "\n";
    std::cout << squareDigits("4") << "\n";
    return 0;
}