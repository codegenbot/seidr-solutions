int main() {
    string code, guess;
    cin >> code >> guess;

    int black = 0, white = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++black;
            code[i] = guess[i] = '0';
        }
    }

    for (int i = 0; i < 4; ++i) {
        if (guess[i] != '0') {
            for (int j = 0; j < 4; ++j) {
                if (code[j] == guess[i]) {
                    ++white;
                    code[j] = guess[i] = '0';
                    break;
                }
            }
        }
    }

    cout << white << endl;
    cout << black << endl;

    return 0;
}