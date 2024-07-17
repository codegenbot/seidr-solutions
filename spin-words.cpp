#include <vector>
#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    std::size_t pos = 0;
    while ((pos = str.find(" ")) != std::string::npos) {
        std::size_t start = pos + 1;
        if (str.substr(pos, 5).find_first_not_of(" ") == std::string::npos)
            break;
        result += str.substr(0, pos);
        for (int i = pos; i > start - 6 && str.substr(i-6, 1) != " "; i--) {
            if (i - 6 <= 0)
                break;
            start = i - 6;
        }
        if (start + strlen(&str[pos]) > str.length())
            result += str.substr(pos);
        else
            result += std::string(&str[start], pos-start).reverse();
        str.erase(0, pos+1);
    }
    result += str;
    return result;
}

int main() {
    std::cout << spinWords("a") << std::endl; // a
    std::cout << spinWords("this is a test") << std::endl; // this is a test
    std::cout << spinWords("this is another test") << std::endl; // this is rehtona test
    std::cout << spinWords("hi") << std::endl; // hi
    return 0;
}