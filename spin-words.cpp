#include <vector>
#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    std::size_t pos = 0;
    
    while ((pos = str.find(" ")) != std::string::npos) {
        std::size_t length = pos;
        
        if (length + 1 < str.length() && isalpha(str[length])) {
            for (++length; length > pos && !isalpha(str[length]); --length);
            std::string word = str.substr(pos, length - pos);
            
            if (word.length() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            
            result += word;
        } else {
            result += str.substr(0, pos);
            break;
        }
        
        str.erase(0, pos + 1);
    }
    
    if (!str.empty()) {
        if (str.length() >= 5) {
            std::reverse(str.begin(), str.end());
        }
        result += str;
    }
    
    return result;
}

int main() {
    // Your test cases here
    cout << spinWords("a") << endl; 
    cout << spinWords("this is a test") << endl; 
    cout << spinWords("this is another test") << endl; 
    cout << spinWords("hi") << endl;
    
    return 0;
}