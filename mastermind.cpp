int mastermind(const std::string& code, const std::string& guess) {
    int blackPegs = 0;
    int whitePegs = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++blackPegs;
        } else {
            auto codeIter = code.begin();
            while (codeIter != code.end()) {
                if (*codeIter == guess[i]) {
                    if (codeIter != code.begin() + i)
                        ++whitePegs;
                    break;
                }
                ++codeIter;
            }
        }
    }

    return blackPegs * 2 + whitePegs;
}