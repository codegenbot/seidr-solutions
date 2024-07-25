int main() {
    string input;
    getline(cin, input);

    istringstream iss(input);
    string word;
    while (iss >> word) {
        if (word.size() >= 5) {
            reverse(word.begin(), word.end());
        }
        cout << word << " ";
    }

    return 0;
}