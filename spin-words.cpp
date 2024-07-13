#include <string>
#include <algorithm>

auto spinWords(std::string str) -> std::string {
    std::vector<std::string> words {str};

    std::string result = "";
    
    for(auto w : words) {
        if(w.length() >= 5) {
            std::reverse(w.begin(), w.end());
        }
        
        result += (w.empty() ? "" : " ") + w;
    }
    
    return result;
}