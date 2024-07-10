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
    return result.substr(0, result.size()-1);
}

string split(string str) {
    string result = "";
    for (char c : str) {
        if (c == ' ') {
            result += "\n";
        } else {
            result += c;
        }
    }
    vector<string> words;
    string word = "";
    for (const auto& line : split(result, '\n')) {
        for (char c : line) {
            if (c != ' ') {
                word += c;
            } else {
                words.push_back(word);
                word = "";
            }
        }
        words.push_back(word);
        word = "";
    }
    return implode(words, " ");
}

string implode(vector<string> arr, string delimeter) {
    string result = "";
    for (const auto& str : arr) {
        result += str;
        if (!str.empty()) {
            result += delimeter;
        }
    }
    return result;
}