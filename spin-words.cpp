int main() {
    string input, word;
    getline(cin, input);
    istringstream iss(input);
    bool first = true;
    while (iss >> word) {
        if (word.size() >= 5) {
            reverse(word.begin(), word.end());
        }
        cout << (first ? "" : " ") << word;
        first = false;
    }
    cout << endl;
    return 0;
}