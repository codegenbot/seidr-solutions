int whitePegs(string code, string guess) {
    int count = 0;
    for (char c : code) {
        if (countFirst(c, guess)) {
            count++;
        }
    }
    return count;
}

int blackPegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            count++;
            code[i] = '-';
            guess[i] = '-';
        }
    }
    return count;
}

bool countFirst(char c, string str) {
    for (char s : str) {
        if (s == c) {
            return true;
        }
    }
    return false;
}