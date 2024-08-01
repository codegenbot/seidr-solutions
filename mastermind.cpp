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
    map<char, bool> codeMap;
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            codeMap[code[i]] = true;
        } else {
            codeMap[guess[i]] = false;
        }
    }
    
    for (int i = 0; i < 4; i++) {
        if (codeMap.find(code[i]) != codeMap.end() && codeMap[code[i]]) {
            count++;
        }
    }
    return count;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << blackPegs(code, guess) << "\n";
    cout << whitePegs(code, guess) << "\n";
    return 0;
}