int mastermind(std::string code, std::string guess) {
    int black = 0;
    int white = 0;

    std::map<char, int> placementMap; 

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) { 
            black++;
        }
    }

    for (char c : code) {
        if (std::count(guess.begin(), guess.end(), c) > 0 && placementMap[c] < 1) {
            white++;
            placementMap[c]++;
        }
    }

    return {black, white};
}