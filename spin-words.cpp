int main() {
    string input;
    getline(cin, input);

    size_t start = 0;
    size_t end = input.find(' ');

    while (end != string::npos) {
        string word = input.substr(start, end - start);
        if (word.size() >= 5) {
            reverse(word.begin(), word.end());
        }
        cout << word << " ";
        start = end + 1;
        end = input.find(' ', start);
    }

    string lastWord = input.substr(start);
    if (lastWord.size() >= 5) {
        reverse(lastWord.begin(), lastWord.end());
    }
    cout << lastWord << endl;

    return 0;
}