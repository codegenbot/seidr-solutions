#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int wordLength;
    string word;

    for (int i = 0; i <= str.length() - 1; i++) {
        if (str[i] == ' ') {
            if(i > 4) {
                for(long long j = i; j >= i - wordLength + 1; j--) {
                    result += str[j];
                }
            } else {
                result += str.substr(i - wordLength + 1, i - i);
            }
            result += " ";
            wordLength = 0;
        } else {
            wordLength++;
        }
    }

    if(str.length() > 4) {
        for(long long j = str.length() - 1; j >= str.length() - wordLength + 1; j--) {
            result += str[j];
        }
    } else {
        result += str.substr(str.length() - wordLength);
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