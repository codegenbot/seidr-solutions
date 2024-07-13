Here is the solution:

#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    string word = "";
    
    for (char c : str) {
        if (c == ' ') {
            if (word.length() >= 5)
                result += newWord(word);
            else
                result += word + " ";
            word = "";
        } else {
            word += c;
        }
    }
    
    if (word.length() >= 5)
        result += newWord(word);
    else
        result += word;
    
    return result;
}

string newWord(string str) {
    string result = "";
    for(int i=str.length()-1; i>=0; i--)
        result += str[i];
    return result;
}