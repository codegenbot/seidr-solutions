int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    // Count correct colors but wrong positions
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
            continue;
        }
        bool found = false;
        for (int j = 0; j < 4; j++) {
            if (code[j] == guess[i] && j != i) {
                found = true;
                break;
            }
        }
        if (!found)
            white++;
    }

    // Count correct colors and positions
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i])
            black++;
    }

    return white, black;
}