int main() {
    string input, word;
    vector<string> words;
    getline(cin, input);

    stringstream ss(input);
    while (ss >> word) {
        if (word.size() >= 5) {
            reverse(word.begin(), word.end());
        }
        words.push_back(word);
    }

    for (int i = 0; i < words.size(); ++i) {
        cout << words[i];
        if (i < words.size() - 1) cout << " ";
    }

    return 0;
}