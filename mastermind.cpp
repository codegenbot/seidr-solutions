int whitePegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            count++;
        }
    }
    return 4 - count;
}

int blackPegs(string code, string guess) {
    int count = 0;
    vector<char> codeVector(code.begin(), code.end());
    for (int i = 0; i < 4; i++) {
        if (countChar(codeVector, guess[i]) > 0) {
            count++;
            replaceChar(codeVector, guess[i], -1);
        }
    }
    return count;
}

int countChar(vector<char> code, char c) {
    int count = 0;
    for (char ch : code) {
        if (ch == c) {
            count++;
        }
    }
    return count;
}

void replaceChar(vector<char>& code, char c, int val) {
    for (int i = 0; i < 4; i++) {
        if (code[i] == c) {
            code[i] = static_cast<char>(val);
        }
    }
}