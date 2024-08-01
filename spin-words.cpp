Here is the solution:

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
            
            if(word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            
            result += word + (i == str.length() ? "" : " ");
            wordStart = i+1;
        }
    }
    
    return result;
}

int main() {
    // Your code here
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Result: " << spinWords(str) << endl;
    return 0;
}