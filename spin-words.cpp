int main() {
    string input;
    getline(cin, input);

    istringstream iss(input);
    string word;
    bool first = true;

    while (iss >> word) {
        if (word.size() >= 5) {
            reverse(word.begin(), word.end());
        }

        if (first) {
            cout << word;
            first = false;
        } else {
            cout << " " << word;
        }
    }

    return 0;
}