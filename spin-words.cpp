#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int wordLength;
    bool isWord = false;
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ') {
            isWord = true;
        } else {
            if (isWord && (wordLength = i - result.length()) >= 5) {
                reverse(result.rbegin(), result.rend());
            }
            result += '\n';
            isWord = false;
        }
        
        if (!isWord) continue;
        result += str[i];
    }
    
    if (result.length() >= 5) {
        reverse(result.rbegin(), result.rend());
    }

    return result;
}

int main() {
    string input;
    while (getline(cin, input)) {
        cout << spinWords(input) << endl;
    }
    return 0;
}