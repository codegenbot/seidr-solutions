#include <vector>
#include <iostream>
#include <string>

std::string spinWords(std::string input) {
    std::string output = "";
    int start = 0;
    
    for(int i = 0; i <= input.length(); i++) {
        if(i == input.length() || input[i] == ' ') {
            string word = input.substr(start, i-start);
            
            if(word.length() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            
            output += word + " ";
            start = i + 1;
        }
    }
    
    return output;
}