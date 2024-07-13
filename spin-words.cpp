int main() {
    string str;
    getline(cin, str);
    string word = "", result = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ') {
            word += str[i];
        } else {
            if (word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            result += word + " ";
            word = "";
        }
    }
    if (word.length() >= 5) {
        reverse(word.begin(), word.end());
    }
    result += word;
    cout << result << endl;
    return 0;
}