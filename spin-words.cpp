#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    std::size_t pos = 0;
    while ((pos = str.find(" ")) != std::string::npos) {
        std::size_t nextPos = str.find(" ", pos + 1);
        if (nextPos == std::string::npos)
            nextPos = str.length();
        std::string word = str.substr(pos, nextPos - pos);
        if (word.size() >= 5)
            std::reverse(word.begin(), word.end());
        result += word;
        if (nextPos != str.length())
            result += " ";
        pos = nextPos + 1;
    }
    return result;
}

int main() {
    std::string str;
    while (std::cout << "Enter a string (or 'q' to quit): ") {
        std::getline(std::cin, str);
        if (str == "q")
            break;
        std::cout << spinWords(str) << std::endl;
    }
    return 0;
}