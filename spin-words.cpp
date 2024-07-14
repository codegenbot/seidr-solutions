#include <string>
#include <sstream>

std::string spinWords(std::string str) {
    std::stringstream ss(str);
    std::string word;
    std::string result;

    while (ss >> word) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        result += word + " ";
    }

    return result.substr(0, result.size() - 1);
}