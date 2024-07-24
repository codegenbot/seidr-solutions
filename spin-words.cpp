#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int start = 0;
    
    for(int i=0; i<=str.length(); i++) {
        if(i == str.length() || str[i] == ' ') {
            string word = str.substr(start, i-start);
            
            if(word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            
            result += word + " ";
            start = i+1;
        }
    }
    
    return result;
}

int main() {
    cout << spinWords("a") << endl; 
    cout << spinWords("this is a test") << endl; 
    cout << spinWords("this is another test") << endl; 
    cout << spinWords("hi") << endl; 
    return 0;
}