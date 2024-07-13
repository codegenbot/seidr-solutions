int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    // Count the number of correct colors in wrong places
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
            break;
        }
    }

    // Count the number of correct colors in right places
    for (int i = 0; i < 4; i++) {
        int count = 0;
        for (int j = 0; j < 4; j++) {
            if (code[i] == guess[j]) {
                count++;
            }
        }
        white += count - 1;
    }

    // Subtract the black pegs from the total white pegs
    white -= black;

    return make_pair(white, black).second;
}