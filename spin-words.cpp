#include <iostream>
#include <string>

using namespace std;

string spinWords(string sentence) {
    string result = "";
    int start = 0;
    
    for(int i = 0; i <= sentence.length(); i++) {
        if(i == sentence.length() || sentence[i] == ' ') {
            string word = sentence.substr(start, i - start);
            
            if(word.length() >= 5) {
                string reversedWord = "";
                for(int j = word.length() - 1; j >= 0; j--) {
                    reversedWord += word[j];
                }
                result += reversedWord + " ";
            } else {
                result += word + " ";
            }
            
            start = i + 1;
        }
    }
    
    return result.substr(0, result.length() - 1);
}

int main() {
    cout << spinWords("a") << endl; 
    cout << spinWords("this is a test") << endl; 
    cout << spinWords("this is another test") << endl; 
    cout << spinWords("hi") << endl; 
    return 0;
}