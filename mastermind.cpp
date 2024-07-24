int getHint(string guess, string solution) {
    int blackPegs = 0;
    int whitePegs = 0;

    for (int i = 0; i < 4; ++i) {
        if (guess[i] == solution[i]) {
            ++blackPegs;
        }
    }

    for (char c : guess) {
        int count = 0;
        for (int i = 0; i < 4; ++i) {
            if (c == solution[i] && guess[i] != solution[i]) {
                ++count;
            }
        }
        whitePegs += count;
    }

    return {blackPegs, whitePegs};
}