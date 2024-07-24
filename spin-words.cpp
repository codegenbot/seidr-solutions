#include <string>
#include <sstream>

std::string spinWords(std::string sentence) {
    std::stringstream ss(sentence);
    std::string word;
    std::string result = "";

    while (ss >> word) {
        if (word.length() >= 5)
            result += std::string(word.rbegin(), word.rend()) + " ";
        else
            result += word + " ";
    }

    return result.substr(0, result.size()-1);
}