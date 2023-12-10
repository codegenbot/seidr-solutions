#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string spinWords(string sentence) {
    vector<string> words = splitBySpace(sentence);
    for (int i = 0; i < words.size(); i++) {
        if (words[i].length() >= 5) {
            reverse(words[i].begin(), words[i].end());
        }
    }
    return joinBySpace(words);
}

string joinBySpace(vector<string> words) {
    string result = "";
    for (int i = 0; i < words.size(); i++) {
        if (i > 0) {
            result += " ";
        }
        result += words[i];
    }
    return result;
}

vector<string> splitBySpace(string sentence) {
    vector<string> words;
    size_t pos = 0;
    while (true) {
        pos = sentence.find(" ", pos);
        if (pos == string::npos) {
            break;
        }
        words.push_back(sentence.substr(pos, pos + 1));
        pos += 2;
    }
    return words;
}