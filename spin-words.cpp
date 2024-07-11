#include <algorithm>
using namespace std;

string spinWords(string str) {
    vector<string> words;
    int i = 0;
    while (i < str.length()) {
        if (str.find(" ", i) == -1 || str.length() - 1 == i) {
            string word = str.substr(i);
            if (word.length() >= 5)
                reverse(word.begin(), word.end());
            words.push_back(word);
            break;
        }
        int pos = str.find(" ", i);
        string word = str.substr(i, pos - i);
        if (word.length() >= 5)
            reverse(word.begin(), word.end());
        words.push_back(word);
        i = pos + 1;
    }
    return concatenateWords(words);
}

string concatenateWords(vector<string> words) {
    string result;
    for (int i = 0; i < words.size(); i++) {
        if (i > 0)
            result += " ";
        result += words[i];
    }
    return result;
}