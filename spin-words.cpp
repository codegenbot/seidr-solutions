#include <vector>
#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    std::size_t prev = 0;
    
    for (std::size_t nextPos = 0; nextPos <= sentence.size(); ) {
        size_t spacePos = sentence.find(' ', prev);
        
        if(spacePos == std::string::npos)
            spacePos = sentence.size();
            
        std::string word = sentence.substr(prev, spacePos - prev);

        if(word.length() >= 5) 
            std::reverse(word.begin(), word.end());
                
        result += word + (spacePos < sentence.size() ? " " : "");
        prev = spacePos + 1;
    }
    
    return result;
}