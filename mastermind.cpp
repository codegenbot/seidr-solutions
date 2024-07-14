int mastermind(const char* code, const string& guess) {
    int white = 0;
    int black = 0;

    for (char c : guess) {
        bool foundInCode = false;
        bool correctPosition = false;

        for (int i = 0; i < 4; ++i) {
            if (code[i] == c) {
                foundInCode = true;
                if (i == int(guess.find(c))) {
                    correctPosition = true;
                }
            }
        }

        if (correctPosition && !foundInCode) continue;
        else if (!correctPosition && foundInCode) white++;
        else if (correctPosition) black++;
    }

    return white + black;
}