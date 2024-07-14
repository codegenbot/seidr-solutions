#include <sstream>

std::string spinWords(std::string str) {
    std::istringstream ss(str);
    std::string word;
    std::string result = "";
    while (getline(ss, word, ' ')) {
        if (word.length() >= 5)
            result += std::string(word.rbegin(), word.rend()) + " ";
        else
            result += word + " ";
    }
    return result.substr(0, result.size() - 1);
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    std::cout << "Spin words: " << spinWords(str) << std::endl;
    return 0;