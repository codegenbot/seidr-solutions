int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    for (char c : guess) { 
        int count = std::count(code.begin(), code.end(), c);
        if (count == 1) { 
            black++;
        } else {
            white += count - 1; 
        }
    }

    return black + white;
}