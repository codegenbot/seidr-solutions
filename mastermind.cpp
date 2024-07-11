int whitePegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            count++;
        }
    }
    return count;
}

int blackPegs(string code, string guess) {
    int count = 0;
    for (char c : code) {
        if (countFirstOccurrence(c, guess) != -1) {
            count++;
            guess[countFirstOccurrence(c, guess)] = '-'; // mark the found peg
        }
    }
    return count;
}

int countFirstOccurrence(char c, string s) {
    for (int i = 0; i < 4; ++i) {
        if (s[i] == c) {
            return i;
        }
    }
    return -1;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    int white = whitePegs(code, guess);
    int black = blackPegs(code, guess);
    cout << white << endl << black << endl;
    return 0;
}