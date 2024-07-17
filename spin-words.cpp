#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string s) {
    string result = "";
    string word = "";
    
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        
        if (c == ' ') {
            if (word.length() >= 5)
                result += newReverse(word) + " ";
            else
                result += word + " ";
            
            word = "";
        } else {
            word += c;
        }
    }
    
    if (word.length() >= 5)
        result += newReverse(word);
    else
        result += word;
    
    return result;
}

string newReverse(string s) {
    string reverse = "";
    
    for (int i = s.length() - 1; i >= 0; i--) {
        reverse += s[i];
    }
    
    return reverse;
}

int main() {
    // Test cases
    cout << spinWords("a") << endl; // Output: a
    cout << spinWords("this is a test") << endl; // Output: this is a test
    cout << spinWords("this is another test") << endl; // Output: this is rehtona test
    cout << spinWords("hi") << endl; // Output: hi

    return 0;
}