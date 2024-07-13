```cpp
#include <string>

std::string spinWords(std::string str) {
    std::string word;
    std::string result = ""; 

    for (int i = 0; i < str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            if (!word.empty()) {
                if (word.length() >= 5) {
                    result += " " + (std::string(word.rbegin(), word.rend()));
                } else {
                    result += " " + word;
                }
                
                word.clear();
            }
        } else {
            word += str[i];
        }
   }
    
    if (!word.empty()) {
        if (word.length() >= 5) {
            result += " " + (std::string(word.rbegin(), word.rend()));
        } else {
            result += " " + word;
        } 
    } 
    std::string output = result; // copy the result
    output.pop_back(); // remove the extra space
    return output;
}