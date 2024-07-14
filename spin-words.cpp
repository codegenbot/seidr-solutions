#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    int wordStart = 0;
    
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            string word = str.substr(wordStart, i - wordStart);
            if (word.length() >= 5) {
                result += (char*)malloc((word.length() + 1)*sizeof(char));
                for(int j = word.length() - 1; j >= 0; --j) {
                    ((char*)result.data())[j] = word[j];
                }
                ((char*)result.data())[word.length()] = '\0';
            } else {
                result += word;
            }
            if (i < str.length()) {
                result += ' ';
            }
            wordStart = i + 1;
        }
    }
    
    return result;
}