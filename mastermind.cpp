int numMatchingChars(string code, string guess) {
    int white = 0;
    int black = 0;

    for (char c : code) {
        if (c == guess[0]) {
            if (code.find(guess[1..3].data()) != string::npos) {
                black++;
                break;
            }
            white++;
        } else if (guess.find(c) != string::npos) {
            int pos = 0;
            for (char gc : guess) {
                if (gc == c) {
                    pos++;
                }
            }
            if (pos > 1) {
                white += pos - 1;
            } else if (pos == 1) {
                black++;
            }
        }
    }

    return {white, black}[0];
}