int main() {
    string input;
    getline(cin, input);

    string word, result;
    bool first = true;

    for (int i = 0; i <= input.size(); i++) {
        if (i == input.size() || input[i] == ' ') {
            if (word.size() >= 5) {
                reverse(word.begin(), word.end());
            }
            result += (first ? "" : " ") + word;
            word = "";
            first = false;
        } else {
            word += input[i];
        }
    }

    cout << result << endl;

    return 0;
}