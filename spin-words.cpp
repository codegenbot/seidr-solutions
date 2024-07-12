```
#include <string>
using namespace std;

string reverse(string str) {
    string revStr = "";
    
    for (int i = str.size() - 1; i >= 0; i--) {
        revStr += str[i];
    }
    
    return revStr;
}

string spinWords(string str) {
    string result = "";
    size_t start = 0;
    
    for (size_t i = 0; i <= str.size(); i++) {
        if (i == str.size() || str[i] == ' ') {
            string word = str.substr(start, i - start);
            
            if (word.size() >= 5) {
                result += reverse(word) + " ";
            } else {
                result += word + " ";
            }
            
            start = i + 1;
        }
    }
    
    return result.substr(0, result.size() - 1);
}