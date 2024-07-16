```cpp
#include <iostream>
#include <string>
#include <sstream>

std::string spinWords(std::string str) {
    std::istringstream iss(str);
    std::string word;
    std::string result;

    while (iss >> word) {
        if (word.length() >= 5)
            result += std::string(word.rbegin(), word.rend());
        else
            result += word + " ";
    }
    result.erase(result.size() - 1);
    return result; 
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    std::cout << spinWords(str) << std::endl;
    return 0;
}