#include <sstream>

std::string spinWords(std::string str) {
    std::istringstream iss(str);
    std::string word;
    std::string result;

    while (iss >> word) {
        if (word.length() >= 5)
            result += std::string(word.rbegin(), word.rend()) + " ";
        else
            result += word + " ";
    }

    return result.substr(0, result.size() - 1);
}

int main() {
    std::cout << spinWords("Hello World This is C++") << std::endl;
    return 0;
}