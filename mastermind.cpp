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
    for (int i = 0; i < 6; i++) {
        int pos1 = -1, pos2 = -1;
        for (int j = 0; j < 4; j++) {
            if (code[j] == 'A' + i) {
                pos1 = j;
            }
            if (guess[j] == 'A' + i) {
                pos2 = j;
            }
        }
        if (pos1 != -1 && pos2 != -1) {
            count++;
        }
    }
    return count;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    int blackPegsCount = blackPegs(code, guess);
    int whitePegsCount = 4 - blackPegsCount - whitePegs(code, guess);
    cout << whitePegsCount << endl;
    cout << blackPegsCount << endl;
    return 0;
}