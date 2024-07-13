int main() {
    string input, output;
    getline(cin, input);

    string word;
    for (int i = 0; i < input.size(); ++i) {
        if (input[i] != ' ') {
            word += input[i];
        } else {
            if (word.size() >= 5) {
                reverse(word.begin(), word.end());
            }
            output += word + " ";
            word = "";
        }
    }

    if (word.size() >= 5) {
        reverse(word.begin(), word.end());
    }
    output += word;

    cout << output;

    return 0;
}