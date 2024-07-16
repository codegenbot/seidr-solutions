#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string s) {
    string result = "";
    string temp = "";
    
    for(int i=0; i<s.length(); i++) {
        if(s[i] == ' ') {
            if(temp.length() >= 5)
                result += reverse(temp) + " ";
            else
                result += temp + " ";
            temp = "";
        } 
        else {
            temp += s[i];
        }
    }

    if(temp.length() >= 5)
        result += reverse(temp);
    else
        result += temp;

    return result;
}

string reverse(string str) {
    int start = 0;
    int end = str.length() - 1;
    
    while(start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    
    return str;
}

int main() {
    // Your code here
    string s;
    cout << "Enter a string: ";
    cin >> s;
    cout << spinWords(s) << endl;

    return 0;
}