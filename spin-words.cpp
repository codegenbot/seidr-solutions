string spinWords(const string &str) {
    string result = "";
    string word = "";
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] == ' ') {
            if (word.size() >= 5) {
                reverse(word.begin(), word.end());
            }
            result += word + " ";
            word = "";
        } else {
            word += str[i];
        }
    }
    if (word.size() >= 5) {
        reverse(word.begin(), word.end());
    }
    result += word;
    return result;
}
int main() {
    string str;
    getline(cin, str);
    cout << spinWords(str) << endl;
    return 0;
}