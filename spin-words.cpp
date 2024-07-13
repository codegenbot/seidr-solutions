#include <string>

auto spinWords(const char* str) -> std::string {
    std::vector<std::string> words;
    
    std::stringstream ss(str);
    std::string word = "";
    
    std::string result = "";
    
    while (ss >> word) {
        if(word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        
        result += (word.empty() ? "" : " ") + word;
    }
    
    return result;
}