#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;

    if (s == "t") {
        std::cout << "True";
    } 
    else if (s == "f") {
        std::cout << "False";
    }
    else {
        char op = s[1];
        bool result = s[0] == 't' && op == '&' || s[0] == 'f' && op == '|';
        std::cout << (result ? "True" : "False");
    }

    return 0;
}