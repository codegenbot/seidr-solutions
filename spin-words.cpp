#include <iostream>
#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    string temp = "";
    
    for(int i=0; i<str.length(); i++) {
        if(str[i] != ' ') {
            temp += str[i];
        } else {
            if(temp.length() >= 5) {
                reverse(temp.begin(), temp.end());
            }
            result += temp + " ";
            temp = "";
        }
    }
    
    if(temp.length() >= 5) {
        reverse(temp.begin(), temp.end());
    }
    
    return result.substr(0, result.length()-1);
}

int main() {
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);
    cout << spinWords(str) << endl;
    return 0;
}