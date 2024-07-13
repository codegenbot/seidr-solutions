int whitePegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < 4; ++i) {
        char c = guess[i];
        if (countFirst(c, code) && !isCorrectPlace(code, guess, i, c)) {
            ++count;
        }
    }
    return count;
}

int blackPegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < 4; ++i) {
        char c = guess[i];
        if (isCorrectPlace(code, guess, i, c)) {
            ++count;
        }
    }
    return count;
}

bool isCorrectPlace(string code, string guess, int index, char c) {
    for (int i = 0; i < 4; ++i) {
        if (i == index && code[i] == c) {
            return true;
        }
    }
    return false;
}

int countFirst(char c, string s) {
    int count = 0;
    for (char cc : s) {
        if (cc == c) {
            ++count;
        }
    }
    return count;
}