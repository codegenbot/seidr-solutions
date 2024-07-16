int countWhitePegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < code.size(); ++i) {
        if (code[i] != guess[i] && code.find(guess[i]) != std::string::npos) {
            count++;
        }
    }
    return count;
}

int countBlackPegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < code.size(); ++i) {
        if (code[i] == guess[i]) {
            count++;
        }
    }
    return count;
}