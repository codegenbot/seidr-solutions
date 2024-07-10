#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string sentence) {
    string result = "";
    int start = 0;
    
    for (int i = 0; i <= sentence.length(); i++) {
        if (i == sentence.length() || sentence[i] == ' ') {
            if (i - start >= 5) {
                for (int j = i - 1; j >= start; j--) {
                    result += sentence[j];
                }
            } else {
                result += sentence.substr(start, i - start);
            }
            
            if (i != sentence.length()) {
                result += ' ';
                start = i + 1;
            }
        }
    }
    
    return result;
}

int main() {
    string s;
    while (getline(cin, s)) {
        cout << spinWords(s) << endl;
    }
    return 0;
}