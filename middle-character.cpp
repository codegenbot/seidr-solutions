#include <iostream>
#include <string>

std::string middleCharacter(std::string s) {
    int len = s.length();
    std::string result = "";

    if (len % 2 == 0)
        result = s.substr(len / 2 - 1, 2); 
    else
        result = s.substr(len / 2, 1);

    return result;
}

int main() {
    std::cout << "Enter a string: ";
    std::string s;
    std::getline(std::cin, s);  
    std::cout << middleCharacter(s);
    return 0;
}