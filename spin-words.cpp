#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string spinWords(string str) {
    string result = "";
    
    int start = 0;
    
    for(int i=0; i<str.length(); i++) {
        if(i == str.length() - 1) {
            string word = str.substr(start, i-start+1);
            
            if(word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            
            result += word + " ";
        } else if (str[i] == ' ') {
            string word = str.substr(start, i-start);
            
            if(word.length() >= 5) {
                reverse(word.begin(), word.end());
            }

            result += word + " ";
            start = i+1;
        } else {
            start++;
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