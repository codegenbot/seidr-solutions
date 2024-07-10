#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    string word = "";

    for(int i=0; i<str.length(); i++) {
        char c = str[i];
        if(c == ' ') {
            if(word.length() >= 5)
                result += reverse(word) + " ";
            else
                result += word + " ";
            word = "";
        }else{
            word += c;
        }
    }

    if(word.length() >= 5)
        result += reverse(word);
    else
        result += word;

    return result;
}

string reverse(string str) {
    string rev = "";
    for(int i=str.length()-1; i>=0; i--) {
        rev += str[i];
    }
    return rev;
}