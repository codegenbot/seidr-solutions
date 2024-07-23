#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    for (const auto& word : split(str)) {
        if (word.length() >= 5) {
            reverse(word.begin(), word.end());
        }
        result += word + " ";
    }
    return result.substr(0, result.size() - 1);
}

string split(const string& str) {
    vector<string> words;
    string word = "";
    for (const auto& c : str) {
        if (c == ' ') {
            words.push_back(word);
            word = "";
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        words.push_back(word);
    }
    return join(words);
}

string join(const vector<string>& words) {
    string result = "";
    for (const auto& word : words) {
        result += word + " ";
    }
    return result.substr(0, result.size() - 1);
}