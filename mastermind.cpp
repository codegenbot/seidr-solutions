int main() {
    string code, guess;
    cin >> code >> guess;

    int black = 0, white = 0;
    map<char, int> freq;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
            code[i] = guess[i] = ' ';
        } else {
            freq[code[i]]++;
        }
    }

    for (int i = 0; i < 4; ++i) {
        if (code[i] != ' ' && freq[guess[i]] > 0) {
            white++;
            freq[guess[i]]--;
        }
    }

    cout << white << endl << black << endl;

    return 0;
}