int main() {
    string line, word;
    getline(cin, line);
    istringstream iss(line);
    bool first = true;
    while (iss >> word) {
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