#include <iostream>
#include <string>

std::string middleCharacter(const std::string& s) {
    int len = s.length();
    int mid = len / 2;

    if(len % 2 == 0){
        return s.substr(mid, 2);
    } else{
        return s.substr(mid, 1);
    }
}

int main() {
    std::cout << "Enter a string: ";
    std::string input;
    std::getline(std::cin, input);

    std::cout << "The middle character(s) is/are: " << middleCharacter(input);

    return 0;
}