Here's the solution:

#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int wordLength = 0;
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            result += str.substr(wordLength, i - wordLength);
            result += " ";
            wordLength = i + 1;
        } else if (i == str.length() - 1) {
            if ((str.length() - wordLength) >= 5) {
                for (int j = str.length() - 1; j >= wordLength; j--)
                    result += str[j];
            } else
                result += str.substr(wordLength);
        }
    }
    
    return result;
}

int main() {
    string str;
    while (cin >> str) {
        cout << spinWords(str) << endl;
    }
    return 0;
}