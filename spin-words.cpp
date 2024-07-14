#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int i = 0;
    
    while(i < str.length()) {
        if(str[i] == ' ') {
            result += " ";
            i++;
        } else {
            int j = i;
            
            // Find the length of the word
            while(j < str.length() && str[j] != ' ') 
                j++;
            
            string word = str.substr(i, j - i);
            
            if(word.length() >= 5) 
                result += reverse(word) + " ";
            else 
                result += word + " ";
            
            i = j;
        }
    }
    
    return result;
}

string reverse(string s) {
    string rev = "";
    for(int i = s.length() - 1; i >= 0; i--) 
        rev += s[i];
    return rev;
}

int main() {
    // Test cases
    cout << spinWords("a") << endl; // Should print: a
    cout << spinWords("this is a test") << endl; // Should print: this is a test
    cout << spinWords("this is another test") << endl; // Should print: this is rehtona test
    cout << spinWords("hi") << endl; // Should print: hi

    return 0;
}