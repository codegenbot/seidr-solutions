#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int wordLength = 0;
    
    for(int i=0; i<str.length(); i++) {
        if(str[i] == ' ') {
            if(wordLength >= 5) {
                reverse(result.rbegin(), result.rend());
            }
            result += str[i];
            wordLength = 0;
        } else {
            result += str[i];
            wordLength++;
        }
    }
    
    if(wordLength >= 5) {
        reverse(result.rbegin(), result.rend());
    }
    
    return result;
}

int main() {
    // input test cases
    cout << spinWords("a") << endl; // a
    cout << spinWords("this is a test") << endl; // this is a test
    cout << spinWords("this is another test") << endl; // this is rehtona test
    cout << spinWords("hi") << endl; // hi
    
    return 0;
}