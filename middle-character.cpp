#include <iostream>
#include <string>

std::string middleCharacter(const std::string& s) {
    int len = s.length();
    if(len % 2 == 0){
        return s.substr(len/2, 2);
    } else{
        return s.substr(len/2, 1);
    }
}

int main() {
    std::cout << "Enter a string: ";
    std::string input;
    std::getline(std::cin, input);

    std::cout << "The middle character(s) is/are: " << middleCharacter(input);

    return 0;
}