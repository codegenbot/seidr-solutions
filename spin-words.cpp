#include <string>
#include <algorithm>
#include <sstream>

std::string spinWords(const char* str) {
    std::string s(str);
    std::stringstream ss(s);
    std::string word;
    std::string result;

    while (ss >> word) {
        if(word.length() >= 5)
            std::reverse(word.begin(), word.end());
        
        result += (result.empty()) ? word : " " + word;
    }

    return result;
}