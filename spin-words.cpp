#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
    string input;
    getline(cin, input);
    vector<string> words = split(input, ' ');
    for (int i = 0; i < words.size(); i++) {
        if (words[i].length() >= 5) {
            reverse(words[i]);
        }
    }
    cout << join(words, " ") << endl;
    return 0;
}

string join(vector<string> words, string delimiter) {
    string result = "";
    for (int i = 0; i < words.size(); i++) {
        if (i > 0) {
            result += delimiter;
        }
        result += words[i];
    }
    return result;
}

vector<string> split(string input, char delimiter) {
    vector<string> words;
    size_t pos = 0;
    while (pos < input.length()) {
        size_t start = pos;
        while (start < input.length() && input[start] != delimiter) {
            start++;
        }
        if (start > pos) {
            words.push_back(input.substr(pos, start - pos));
        }
        pos = start + 1;
    }
    return words;
}