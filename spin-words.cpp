#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int length = 0;
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            if (length >= 5) {
                for (int j = length - 1; j >= 0; j--) {
                    result += str[i - length + j];
                }
            } else {
                result += str.substr(i - length + 1, i);
            }
            length = 0;
        } else {
            length++;
        }
    }
    
    if (length >= 5) {
        for (int j = length - 1; j >= 0; j--) {
            result += str[str.length() - length + j];
        }
    } else {
        result += str;
    }
    
    return result;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << spinWords(str) << endl;
    return 0;
}