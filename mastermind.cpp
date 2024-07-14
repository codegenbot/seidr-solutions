int numWhitePegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            count++;
        }
    }
    return count;
}

int numBlackPegs(string code, string guess) {
    int count = 0;
    map<char, int> codeMap;
    for (int i = 0; i < 4; i++) {
        codeMap[code[i]]++;
    }

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            codeMap[code[i]]--;
        }
    }

    for (auto p : codeMap) {
        count += p.second;
    }
    return count;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << numWhitePegs(code, guess) << endl;
    cout << numBlackPegs(code, guess) << endl;
    return 0;
}