Here is the solution:

#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string sentence) {
    string result = "";
    int start = 0;
    
    for (int i = 0; i <= sentence.length(); i++) {
        if (i == sentence.length() || sentence[i] == ' ') {
            string word = sentence.substr(start, i - start);
            
            if (word.length() >= 5) {
                for (int j = word.length() - 1; j >= 0; j--)
                    result += word[j];
            } else
                result += word;
            
            if (i < sentence.length())
                result += " ";
            start = i + 1;
        }
    }
    
    return result;
}

int main() {
    string s1 = "a";
    cout << spinWords(s1) << endl; // a
    
    string s2 = "this is a test";
    cout << spinWords(s2) << endl; // this is a test
    
    string s3 = "this is another test";
    cout << spinWords(s3) << endl; // this is rehtona test
    
    string s4 = "hi";
    cout << spinWords(s4) << endl; // hi
    return 0;
}