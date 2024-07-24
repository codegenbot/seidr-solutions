void calculatePegs(string code, string guess) {
    int blackPegs = 0, whitePegs = 0;
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++blackPegs;
        } else {
            for (int j = 0; j < 4; ++j) {
                if (code[i] == guess[j]) {
                    ++whitePegs;
                    break;
                }
            }
        }
    }
    
    cout << "Black Pegs: " << blackPegs << ", White Pegs: " << whitePegs << endl;
}