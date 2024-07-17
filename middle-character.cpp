```cpp
#include <iostream>
#include <string>

std::string middleCharacter(const std::string& s) {
    int length = s.length();
    if(length % 2 == 0){
        int midIndex1 = (length/2) - 1;
        int midIndex2 = (length/2);
        return s.substr(midIndex1, 2);
    } else {
        int midIndex = length/2;
        return s.substr(midIndex, 1);
    }
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input); 
    std::cout << middleCharacter(input) << std::endl;
    return 0;
}