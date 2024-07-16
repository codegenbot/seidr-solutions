#include <string>
#include <sstream>
#include <cctype>

std::string spinWords(std::string str) {
    std::stringstream ss;
    
    for (std::string token : boost::split(token, str, [](char c){return c == ' ';})) {
        int wordLength = token.length();
        
        if(wordLength >= 5) {
            for(int i = wordLength - 1; i >= 0; --i)
                ss << token[i];
        } else
            ss << token;
        
        ss << " ";
    }
    
    return ss.str().substr(0, ss.str().length() - 1);
}