#include <sstream>

std::string spinWords(std::string str) {
    std::istringstream ss(str);
    std::string word;
    std::string result;

    while (ss >> word) {
        if(word.size()>4)
            result += std::string(word.rbegin(), word.rend()) + " ";
        else
            result += word + " ";
    }

    if (result.back() == ' ') 
        result.pop_back();

    return result;
}

std::string str = "Hello World!";
std::string result = spinWords(str);