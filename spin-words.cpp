string spinWords(const string &sentence) {
    string result = "";
    string word = "";
    for (char c : sentence) {
        if (c == ' ') {
            result += (word.length() >= 5 ? string(word.rbegin(), word.rend()) : word) + " ";
            word = "";
        } else {
            word += c;
        }
    }
    result += (word.length() >= 5 ? string(word.rbegin(), word.rend()) : word);
    return result;
}
int main() {
    string sentence;
    getline(cin, sentence);
    cout << spinWords(sentence) << endl;
    return 0;
}