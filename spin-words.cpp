#include <iostream>
#include <string>

std::string spinWords(std::string input) {
    std::string output = "";
    std::size_t pos = 0;
    
    while ((pos = input.find(" ")) != std::string::npos) {
        std::size_t start = 0;
        if (input.substr(0, pos).length() >= 5)
            start = pos - 1;

        output += input.substr(start, pos - start);
        
        if (input.length() > ++pos)
            output += " ";
    }
    
    if (input.length() >= 5)
        output += input.substr(pos - start);

    return output;
}

int main() {
    std::string s;
    while (std::cin >> s) {
        std::cout << spinWords(s) << std::endl;
    }
    return 0;
}