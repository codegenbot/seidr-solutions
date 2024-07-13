int whitePegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++count;
        }
    }
    return count;
}

int blackPegs(string code, string guess) {
    int count = 0;
    map<char, int> codeMap;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++count;
        } else {
            codeMap[guess[i]]++;
        }
    }
    for (int i = 0; i < 4; ++i) {
        if (code[i] != guess[i] && codeMap[guess[i]] > 0) {
            --codeMap[guess[i]];
        }
    }
    return count;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << blackPegs(code, guess) << '\n';
    cout << whitePegs(code, guess) << '\n';
    return 0;
}