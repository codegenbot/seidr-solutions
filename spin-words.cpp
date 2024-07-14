#include <iostream>
#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    string word;
    
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i+1] == ' ') {
            word = str.substr(i);
            
            if (word.length() >= 5)
                result += reverse(word) + " ";
            else
                result += word + " ";
        }
    }
    
    return result;
}

string reverse(string s) {
    string r = "";
    for(int i = s.length() - 1; i >= 0; i--) {
        r += s[i];
    }
    return r;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    
    cout << spinWords(str) << endl;
    
    return 0;
}