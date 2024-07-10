PegCounts mastermind(string code, string guess) {
    int black = 0;
    int white = 0;

    // Create a copy of the code to mark used characters
    string code_copy = code;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
            code_copy[i] = ' '; // Mark as used to avoid counting again
        }
    }

    for (int i = 0; i < 4; ++i) {
        bool correctColor = false;
        for (int j = 0; j < 4; ++j) {
            if (code_copy[j] == guess[i]) {
                correctColor = true;
                code_copy[j] = ' '; // Mark as used to avoid counting again
                break;
            }
        }
        if (correctColor) {
            white++;
        }
    }

    return {black, white};
}