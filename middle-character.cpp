#include <iostream>
#include <string>

std::string middleCharacter(std::string s) {
    int len = s.length();
    std::string result = "";
    int middleIndex = len / 2;
    if (len % 2 != 0)
        middleIndex++;

    if (len % 2 == 0)
        result = s.substr(middleIndex - 1, 2); 
    else
        result = s.substr(middleIndex, 1);

    return result;
}

int main() {
    std::string s;
    std::cout << "Enter a string: ";
    std::getline(std::cin, s);
    std::cout << middleCharacter(s) << std::endl; 
    return 0;
}