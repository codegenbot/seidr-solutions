int main() {
    string input;
    getline(cin, input);

    istringstream iss(input);
    string word;
    bool first = true;
    while (iss >> word) {
        if (word.length() >= 5) {
            if (!first) {
                cout << " ";
            }
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