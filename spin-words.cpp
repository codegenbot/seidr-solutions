Here is the solution:

#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    std::size_t pos = 0;
    while ((pos = str.find(" ")) != std::string::npos) {
        std::string word = str.substr(0, pos);
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        result += word + " ";
        str.erase(0, pos + 1);
    }
    result += str;
    return result;
}

int main() {
    std::string str;
    while (std::cin >> str) {
        std::cout << spinWords(str) << std::endl;
    }
    return 0;
}