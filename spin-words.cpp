#include <string>
#include <cstring>

using namespace std;

string spinWords(string sentence) {
    string result = "";
    char* word = strtok(const_cast<char*>(sentence.c_str()), " ");
    
    while(word != NULL) {
        int wordLength = strlen(word);
        
        if(wordLength >= 5)
            result += string(word).reverse() + " ";
        else
            result += word + " ";
        
        word = strtok(NULL, " ");
    }
    
    return result.substr(0, result.length()-1);
}