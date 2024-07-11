int main() {
    string input;
    getline(cin, input);

    string word = "";
    string result = "";
    for (char c : input) {
        if (c == ' ') {
            if (word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            result += word + ' ';
            word = "";
        } else {
            word += c;
        }
    }

    if (word.length() >= 5) {
        reverse(word.begin(), word.end());
    }
    result += word;

    cout << result << endl;

    return 0;
}