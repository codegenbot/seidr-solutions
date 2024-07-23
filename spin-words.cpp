#include <string>
using namespace std;

string spinWords(string sentence) {
    string result = "";
    int wordLength;
    char* word = strtok(const_cast<char*>(sentence.c_str()), " ");
    
    while(word != NULL) {
        if((wordLength = strlen(word)) >= 5)
            strcat(strrev(string(word)), " ");
        else
            strcat(string(word), " ");
        
        result += string(word);
        word = strtok(NULL, " ");
    }
    
    return result.substr(0, result.length()-1);
}