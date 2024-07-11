int whitePegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++count;
        }
    }
    return 4 - count;
}

int blackPegs(string code, string guess) {
    int count = 0;
    vector<char> codeChars(code.begin(), code.end());
    for (int i = 0; i < 4; ++i) {
        if ((int)guess[i] != -1 && code[i] == guess[i]) {
            ++count;
        }
    }
    return count;
}

pair<int, int> mastermind(string code, string guess) {
    pair<int, int> result = {0, 0};
    for (int i = 0; i < 4; ++i) {
        if ((int)guess[i] != -1 && code[i] == guess[i]) {
            ++result.second;
        }
    }
    result.first = whitePegs(code, guess);
    return result;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    pair<int, int> result = mastermind(code, guess);
    cout << result.first << endl;
    cout << result.second << endl;
    return 0;
}