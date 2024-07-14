#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string sentence) {
    string output = "";
    int wordStart = 0;
    for (int i = 0; i <= sentence.length(); i++) {
        if (i == sentence.length() || sentence[i] == ' ') {
            string word = sentence.substr(wordStart, i - wordStart);
            if (word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            output += word + " ";
            wordStart = i + 1;
        }
    }
    return output;
}

int main() {
    string input;
    while (getline(cin, input)) {
        cout << spinWords(input) << endl;
    }
    return 0;
}