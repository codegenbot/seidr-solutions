#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int length = 0;
    for(int i=0; i<str.length(); i++) {
        if(str[i] == ' ') {
            while(length >= 5) {
                for(int j=length-1; j>=0; j--) {
                    result += str[i-j];
                }
                result += ' ';
                length = 0;
            }
            result += str.substr(i-length, length);
            length = 0;
        } else {
            length++;
        }
    }
    while(length >= 5) {
        for(int j=length-1; j>=0; j--) {
            result += str[i-j];
        }
        result += ' ';
        length = 0;
    }
    result += str.substr(i-length, length);
    
    return result;
}

int main() {
    string input;
    while(true) {
        cout << "Enter a sentence or type 'quit' to stop: ";
        cin >> input;
        if(input == "quit") break;
        cout << spinWords(input) << endl;
    }
    return 0;
}