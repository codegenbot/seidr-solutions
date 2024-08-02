Here's the solution:

#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int start = 0;
    
    for(int i = 0; i <= str.length(); i++) {
        if(i == str.length() || str[i] == ' ') {
            string word = str.substr(start, i - start);
            
            if(word.length() >= 5)
                result += reverse(word) + " ";
            else
                result += word + " ";
            
            start = i + 1;
        }
    }
    
    return result;
}

string reverse(string s) {
    string r = "";
    for(int i = s.length()-1; i >= 0; i--)
        r += s[i];
    return r;
}

int main() {
    // Your code here
    return 0;
}