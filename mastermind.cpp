int countWhitePegs(const std::string& code, const std::string& guess) {
    int whitePegs = 0;
    for (char c : guess) {
        int count = 0;
        for (char cc : code) {
            if (c == cc) {
                ++count;
            }
        }
        whitePegs += count - countBlackPegs(code, guess);
    }
    return whitePegs;
}