int main() {
    string word;
    while (cin >> word) {
        if (word.length() >= 5) {
            reverse(word.begin(), word.end());
        }
        cout << word << " ";
    }
    return 0;
}