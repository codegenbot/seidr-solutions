int main() {
    string code, guess;
    cin >> code >> guess;

    int blackPegs = 0, whitePegs = 0;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
            code[i] = guess[i] = ' ';
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (code[i] == guess[j] && code[i] != ' ') {
                whitePegs++;
                code[i] = guess[j] = ' ';
            }
        }
    }

    cout << whitePegs << "\n" << blackPegs;
    return 0;
}