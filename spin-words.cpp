```
#include <iostream>
#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    char* token = strtok(const_cast<char*>(str.c_str()), " ");
    
    while(token != NULL) {
        int wordLength = strlen(token);
        
        if(wordLength >= 5) {
            for(int i = wordLength - 1; i >= 0; --i)
                result += token[i];
        } else
            result += token;
        
        result += " ";
        token = strtok(NULL, " ");
    }
    
    return result.substr(0, result.length() - 1);
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << spinWords(str) << endl;
    return 0;
}