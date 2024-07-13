string spinWords(const string &str) {
    string result = "";
    string word = "";
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] == ' ' || i == str.length() - 1) {
            if (word.length() >= 5) {
                for (int j = word.length() - 1; j >= 0; --j) {
                    result += word[j];
                }
            } else {
                result += word;
            }
            result += (i == str.length() - 1) ? "" : " ";
            word = "";
        } else {
            word += str[i];
        }
    }
    return result;
}

int main() {
    string input;
    getline(cin, input);
    cout << spinWords(input) << endl;
    return 0;
}