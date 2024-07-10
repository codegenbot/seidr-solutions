PegCounts mastermind(std::string code, std::string guess) {
    PegCounts result = {0, 0};
    int codeCount[256] = {0};

    // Count black pegs
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            result.black++;
        }
    }

    // Count white pegs
    for (int i = 0; i < 4; ++i) {
        codeCount[guess[i]]++;
    }
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) continue;
        if (codeCount[guess[i]] > 0) {
            result.white++;
            codeCount[guess[i]]--;
        }
    }

    return result;
}