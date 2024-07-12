int main() {
    string line;
    getline(cin, line);

    istringstream iss(line);
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

    return 0;
}