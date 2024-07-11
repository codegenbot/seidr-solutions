int main() {
    string str;
    getline(cin, str);

    string word = "";
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] == ' ') {
            if (word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            cout << word << " ";
            word = "";
        } else {
            word += str[i];
        }
    }

    if (word.length() >= 5) {
        reverse(word.begin(), word.end());
    }
    cout << word << endl;

    return 0;
}