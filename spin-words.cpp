int main() {
    string input;
    getline(cin, input);

    istringstream iss(input);
    string word;
    bool first = true;
    while (iss >> word) {
        if (word.length() >= 5) {
            reverse(word.begin(), word.end());
        }
        if (!first) {
            cout << " ";
        }
        cout << word;
        first = false;
    }
    cout << endl;
    return 0;
}