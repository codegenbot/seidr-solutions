#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    string temp = "";
    
    for(int i=0; i<str.length(); i++) {
        if(str[i] == ' ') {
            if(temp.length() >= 5) {
                for(int j=temp.length()-1; j>=0; j--) {
                    result += temp[j];
                }
            } else {
                result += temp;
            }
            temp = "";
        } else {
            temp += str[i];
        }
    }
    
    if(temp.length() >= 5) {
        for(int i=temp.length()-1; i>=0; i--) {
            result += temp[i];
        }
    } else {
        result += temp;
    }
    
    return result;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << "Spin words: " << spinWords(str) << endl;
    return 0;
}