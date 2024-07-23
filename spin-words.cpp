#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

string spinWords(string sentence) {
    string result = "";
    char* word = strtok(const_cast<char*>(sentence.c_str()), " ");
    
    while(word != NULL) {
        int wordLength = strlen(word);
        
        if(wordLength >= 5)
            result += (string(word) + " ") + string(rotate(word, 0, wordLength - 1)) + "\n";
        else
            result += string(word) + " ";
        
        word = strtok(NULL, " ");
    }
    
    return result;
}

string rotate(const string& str, int start, int length) {
    if(start >= length)
        return str;
    if(length == 0)
        return "";
    return str.substr(length) + str.substr(0, length);
}