int main() {
    string input;
    getline(cin, input);

    string word, output;
    for (int i = 0; i <= input.size(); ++i) {
        if (i == input.size() || input[i] == ' ') {
            if (word.size() >= 5) {
                reverse(word.begin(), word.end());
            }
            output += word + (i == input.size() ? "" : " ");
            word = "";
        } else {
            word += input[i];
        }
    }

    cout << output << endl;

    return 0;
}