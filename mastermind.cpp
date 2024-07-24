int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    map<char, int> code_map;
    for (char c : code) {
        code_map[c]++;
    }

    for (int i = 0; i < 4; i++) {
        if (guess[i] == code[i]) {
            code_map[guess[i]]--;
            black++;
        }
    }

    for (int i = 0; i < 4; i++) {
        if (code_map[guess[i]] > 0) {
            white++;
            code_map[guess[i]]--;
        }
    }

    return white, black;
}