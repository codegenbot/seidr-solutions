int whitePegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            count++;
        }
    }
    return count;
}

int blackPegs(string code, string guess) {
    int count = 0;
    vector<char> codeChars(code.begin(), code.end());
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            codeChars.erase-remove(&code[i]);
            break;
        }
    }
    for (int i = 0; i < 4; i++) {
        if (count(codeChars.begin(), codeChars.end(), guess[i]) > 0) {
            count++;
            codeChars.erase-remove(&guess[i]);
        }
    }
    return count;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << blackPegs(code, guess) << endl;
    cout << whitePegs(code, guess) << endl;
    return 0;
}