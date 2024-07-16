#include <string>

std::string spinWords(std::string str) {
    std::string result;
    std::istringstream iss(str);
    std::string word;

    while (iss >> word) {
        if (word.length() >= 5)
            result += std::string(word.rbegin(), word.rend()) + " ";
        else
            result += word + " ";
    }

    return result.substr(0, result.size()-1); 
}