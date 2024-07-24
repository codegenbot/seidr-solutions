Here is the solution:

string spinWords(string str) {
    vector<string> words;
    string word;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            words.push_back(word);
            word.clear();
        } else {
            word += str[i];
        }
    }

    words.push_back(word);

    for (int i = 0; i < words.size(); i++) {
        if (words[i].length() >= 5) {
            reverse(words[i].begin(), words[i].end());
        }
    }

    string result;
    for (int i = 0; i < words.size(); i++) {
        result += words[i];
        if (i < words.size() - 1) {
            result += ' ';
        }
    }

    return result;
}