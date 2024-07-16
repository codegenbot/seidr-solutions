```cpp
#include <string>
#include <sstream>
#include <iostream>

std::string spinWords(std::string str) {
    std::stringstream ss(str);
    std::string word;
    std::string result;

    while (ss >> word) {
        if(word.size()>4)
            result += std::string(word.rbegin(), word.rend()) + " ";
        else
            result += word + " ";
    }

    if (result.back() == ' ') 
        result.pop_back();

    return result;
}

int main() {
    std::cout << spinWords("Hello World") << std::endl;
    return 0;
}