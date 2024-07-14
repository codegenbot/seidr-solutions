Here is the completed code:

#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int wordStart = 0;
    
    for(int i=0; i<=str.length(); i++) {
        if(i == str.length() || str[i] == ' ') {
            string word = str.substr(wordStart, i-wordStart);
            
            if(word.length() >= 5) 
                result += (word).reverse().append(" ");
            else
                result += word + " ";
            
            wordStart = i+1;
        }
    }
    
    return result.substr(0, result.length()-1);
}

int main() {
    string str;
    while(true) {
        cout << "Enter a sentence (or 'quit' to finish): ";
        cin >> str;
        
        if(str == "quit")
            break;
        
        cout << spinWords(str) << endl;
    }
    
    return 0;
}