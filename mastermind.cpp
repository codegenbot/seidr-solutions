int mastermind(string code, string guess) {
    int whitePegs = 0;
    int blackPegs = 0;
    
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            blackPegs++;
        } else {
            bool found = false;
            for(int j=i+1; j<4; j++) {
                if(guess[j] == code[i] && !found) {
                    whitePegs++;
                    found = true;
                }
            }
        }
    }
    
    return blackPegs + whitePegs;
}

int main() {
    string code, guess;
    cout << "Enter the Mastermind code: ";
    getline(cin, code);
    cout << "Enter your guess: ";
    getline(cin, guess);
    int pegs = mastermind(code, guess);
    std::cout << "Number of pegs: " << pegs << std::endl;
    return 0;
}