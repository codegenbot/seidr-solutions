#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    string temp = "";

    for(int i=0; i<str.length(); i++) {
        temp += str[i];

        if(str[i+1] == ' ' || i==str.length()-1) {
            if(temp.length() >= 5)
                result += reverseWord(temp);
            else
                result += temp;
            temp = "";
        }
    }

    return result;
}

string reverseWord(string str) {
    string revStr = "";

    for(int i=str.length()-1; i>=0; i--)
        revStr += str[i];

    return revStr;
}

int main() {
    string str;

    while(true) {
        cout << "Enter a sentence (or 'q' to quit): ";
        cin >> str;

        if(str == "q")
            break;

        cout << spinWords(str) << endl;
    }

    return 0;
}