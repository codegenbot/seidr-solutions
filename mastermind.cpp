int main() {
    string code, guess;
    cin >> code >> guess;

    int black = 0, white = 0;
    map<char, int> codeCount, guessCount;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        } else {
            codeCount[code[i]]++;
            guessCount[guess[i]]++;
        }
    }

    for (auto& elem : codeCount) {
        white += min(elem.second, guessCount[elem.first]);
    }

    cout << white << endl;
    cout << black << endl;

    return 0;
}