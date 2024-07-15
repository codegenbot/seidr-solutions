#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    vector<string> words;
    bool inWord = false;

    for (char c : str) {
        if (c == ' ') {
            inWord = false;
        } else {
            inWord = true;
            result += c;
        }
        
        if (!inWord && !result.empty()) {
            words.push_back(result);
            result.clear();
        }
    }

    if (!result.empty())
        words.push_back(result);

    for (int i = 0; i < words.size(); ++i) {
        int wordLength = words[i].length();
        if (wordLength >= 5)
            cout << words[i].reverse() << ' ';
        else
            cout << words[i] << ' ';
    }

    return str;
}

int main() {
    string input;
    cin >> input;

    cout << spinWords(input);

    return 0;