#include <iostream>
#include <string>

bool solveBoolean(const std::string& s) {
    if (s.empty()) return true;

    size_t first = s.find('|');
    size_t second = s.find('|', first + 1);

    if (first == std::string::npos && second == std::string::npos) {
        if (s == "t") return true;
        else if (s == "f") return false;
    } 
    else if (second == std::string::npos) {
        std::string left = s.substr(0, first);
        std::string right = s.substr(first + 1);

        if (left == "t" || left == "") return true;
        else if (left == "f") return false;

        if (right == "t" || right == "") return true;
        else if (right == "f") return false;

        return solveBoolean(left) && solveBoolean(right);
    } 
    else {
        std::string left = s.substr(0, first);
        std::string middle = s.substr(first + 1, second - first - 1);
        std::string right = s.substr(second + 1);

        if (left == "t" || left == "") return true;
        else if (left == "f") return false;

        if (middle == "t" || middle == "") return true;
        else if (middle == "f") return false;

        if (right == "t" || right == "") return true;
        else if (right == "f") return false;

        return solveBoolean(left) && solveBoolean(middle) && solveBoolean(right);
    }
}

int main() {
    std::string input;
    while(true) {
        std::cout << "Enter a Boolean expression: ";
        std::getline(std::cin, input);
        if(input == "t" || input == "f") break;
        bool result = solveBoolean(input);
        if (result) std::cout << "True" << std::endl;
        else std::cout << "False" << std::endl;
    }
    return 0;
}