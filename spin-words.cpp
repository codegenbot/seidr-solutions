#include <iostream>
#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    string temp = "";
    
    for(int i=0; i<str.length(); i++) {
        char c = str[i];
        
        if(c == ' ') {
            if(temp.length() >= 5) {
                reverse(temp.begin(), temp.end());
                result += temp + " ";
                temp = "";
            } else {
                result += temp + " ";
                temp = "";
            }
        } else {
            temp += c;
        }
    }
    
    if(temp.length() >= 5) {
        reverse(temp.begin(), temp.end());
        result += temp;
    } else {
        result += temp;
    }
    
    return result;
}

int main() {
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);
    cout << spinWords(str) << endl;
    return 0;
}