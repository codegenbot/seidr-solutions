#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string spinWords(string input) {
    vector<string> words = split(input, ' ');
    for (int i = 0; i < words.size(); i++) {
        if (words[i].length() >= 5) {
            reverse(words[i]);
        }
    }
    return join(words, ' ');
}

string split(string input, char delimiter) {
    vector<string> words;
    size_t pos = 0;
    while ((pos = input.find(delimiter)) != string::npos) {
        words.push_back(input.substr(0, pos));
        input.erase(0, pos + 1);
    }
    if (input.length() > 0) {
        words.push_back(input);
    }
    return words;
}

string join(vector<string> words, char delimiter) {
    string output = "";
    for (int i = 0; i < words.size(); i++) {
        if (i > 0) {
            output += delimiter;
        }
        output += words[i];
    }
    return output;
}

int main() {
    string input = "Hello, World!";
    cout << spinWords(input) << endl;
    return 0;
}