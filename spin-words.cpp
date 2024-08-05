#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    int wordLength;
    char *token = strtok((char*)str.c_str(), " ");
    while(token != NULL){
        wordLength = strlen(token);
        if(wordLength >= 5)
            for(int i = wordLength - 1; i >= 0; --i)
                result += token[i];
        else
            result += token;
        result += " ";
        token = strtok(NULL, " ");
    }
    return result.substr(0, result.length() - 1);
}