int numWhitePegs(string code, string guess) {
    int white = 0;
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            white++;
        }
    }
    return white;
}

int numBlackPegs(string code, string guess) {
    int black = 0;
    vector<char> codeArray(code.begin(), code.end());
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            codeArray[i] = '\0';
            black++;
        }
    }
    for (int i = 0; i < 4; i++) {
        if (count(codeArray.begin(), codeArray.end(), guess[i]) > 0) {
            black++;
            codeArray.erase(remove(codeArray.begin(), codeArray.end(), guess[i]), codeArray.end());
        }
    }
    return black;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << numWhitePegs(code, guess) << endl;
    cout << numBlackPegs(code, guess) << endl;
    return 0;
}