```c++
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int wordStart = 0; // Declare and initialize wordStart
string spinWords(string str) {
    string result = "";
    
    for(int i=0; i<str.length(); i++) {
        string word;
        
        if(i == str.length() - 1) {
            word = str.substr(i);
            
            if(word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            
            result += word + " ";
            break;
        } else if (str[i] == ' ') {
            word = str.substr(wordStart, i-wordStart);

            if(word.length() >= 5) {
                reverse(word.begin(), word.end());
            }

            result += word + " ";
            wordStart = i+1;
        } else {
            word += str[i];
            wordStart = i;
        }
    }
    
    return result;
}

int main() {
    string str;
    cout << "Enter a string of one or more words (separated by spaces): ";
    getline(cin, str);

    string output = spinWords(str);
    
    cout << "Output: " << output << endl;

    return 0;
}