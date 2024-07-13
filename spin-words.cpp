string spinWords(const string &sentence) {
    string result = "";
    string word = "";
    for (int i = 0; i < sentence.size(); ++i) {
        if (sentence[i] == ' ') {
            if (word.size() >= 5) {
                reverse(word.begin(), word.end());
            }
            result += word + " ";
            word = "";
        } else {
            word += sentence[i];
        }
    }
    if (word.size() >= 5) {
        reverse(word.begin(), word.end());
    }
    result += word;
    return result;
}

int main() {
    string sentence;
    getline(cin, sentence);
    cout << spinWords(sentence) << endl;
    return 0;
}