int main() {
    string input;
    getline(cin, input);

    string word;
    stringstream ss(input);
    bool first = true;
    while (ss >> word) {
        if (word.size() >= 5) {
            reverse(word.begin(), word.end());
        }
        if (!first) {
            cout << " ";
        }
        cout << word;
        first = false;
    }

    return 0;
}