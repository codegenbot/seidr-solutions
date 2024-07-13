int main() {
    string input;
    getline(cin, input);

    string word = "";
    string result = "";

    for (int i = 0; i < input.length(); ++i) {
        if (input[i] == ' ') {
            if (word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            result += word + " ";
            word = "";
        } else {
            word += input[i];
        }
    }

    if (word.length() >= 5) {
        reverse(word.begin(), word.end());
    }
    result += word;

    cout << result;

    return 0;
}