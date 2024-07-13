#include <string>

auto spinWords(const char* str) -> std::string {
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