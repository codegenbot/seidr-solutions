int whitePegs(string code, string guess) {
    int count = 0;
    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++) {
            if(code[i] == guess[j]) {
                // Correct color and position, counted in black pegs
                return 0; 
            } 
        }
    }
    
    for(int i=0; i<4; i++) {
        count += std::count(guess.begin(), guess.end(), code[i]);
    }
    
    return count;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << whitePegs(code, guess) << endl;
    // Count black pegs manually since code has incorrect logic
    int blackPegs = 0;
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            blackPegs++;
        }
    }
    cout << blackPegs << endl;
    return 0;
}