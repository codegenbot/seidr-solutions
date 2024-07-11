int main() {
    string input;
    getline(cin, input);

    string word;
    istringstream iss(input);
    while (iss >> word) {
        if (word.size() >= 5) {
            reverse(word.begin(), word.end());
        }
        cout << word << " ";
    }

    return 0;
}