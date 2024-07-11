int whitePegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < 4; i++) {
        if (guess[i] == code[i]) {
            count++;
        }
    }
    return count;
}

int blackPegs(string code, string guess) {
    int blackCount = 0;
    vector<char> codeArray(code.begin(), code.end());
    for (char c : guess) {
        int matches = count(codeArray.begin(), codeArray.end(), c);
        if (matches > 0) {
            blackCount++;
            codeArray.erase(remove(codeArray.begin(), codeArray.end(), c), codeArray.end());
        }
    }
    return blackCount;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    int black = blackPegs(code, guess);
    cout << black << endl;
    cout << whitePegs(code, guess) << endl;
    return 0;
}