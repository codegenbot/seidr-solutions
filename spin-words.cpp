```c++
#include <string>
#include <algorithm>

auto spinWords(std::string str) {
    std::vector<std::string> words;
    
    std::string word = "";
    
    for(int i=0; i<str.length(); i++) {
        if(str[i] == ' ') {
            words.push_back(word);
            word = "";
        } else {
            word += str[i];
        }
    }
    
    words.push_back(word);
    
    std::string result = "";
    
    for(auto w : words) {
        if(w.length() >= 5) {
            std::reverse(w.begin(), w.end());
        }
        
        result += w.empty() ? "" : " " + w;
    }
    
    return result;
};