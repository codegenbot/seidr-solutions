#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    vector<string> words;
    string word = "";

    for (char c : str) {
        if (c == ' ') {
            if (word.length() >= 5) {
                words.push_back(string(word.rbegin(), word.rend()));
            } else {
                words.push_back(word);
            }
            word = "";
        } else {
            word += c;
        }
    }

    if (word.length() >= 5) {
        words.push_back(string(word.rbegin(), word.rend()));
    } else {
        words.push_back(word);
    }

    string result = "";
    for (string w : words) {
        result += w + " ";
    }

    return result.substr(0, result.length() - 1); 
}

int main() {
    string input;
    cout << "Enter a sentence: ";
    getline(cin, input);
    cout << spinWords(input) << endl;
    return 0;
}