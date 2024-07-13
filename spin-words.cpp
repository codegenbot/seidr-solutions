Here is the solution:

#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    std::size_t pos = 0;
    while ((pos = str.find(" ")) != std::string::npos) {
        std::size_t wordLength = str.substr(0, pos).length();
        if (wordLength >= 5) {
            for (int i = wordLength - 1; i >= 0; --i)
                result += str[pos - i] == ' ' ? ' ' : str[pos - i];
        } else
            result += str.substr(0, pos);
        str.erase(0, pos + 1);
    }
    if (str.length() > 4) {
        for (int i = str.length() - 1; i >= 0; --i)
            result += str[i] == ' ' ? ' ' : str[i];
    } else
        result += str;
    return result;
}

int main() {
    std::string input;
    while (std::cin >> input) {
        std::cout << spinWords(input) << std::endl;
    }
    return 0;
}