int whitePegs(string mastermindCode, string guess) {
    int count = 0;
    for(int i = 0; i < 4; i++) {
        if(mastermindCode[i] == guess[i]) {
            count++;
        }
    }
    return count;
}

int blackPegs(string mastermindCode, string guess) {
    int count = 0;
    for(int i = 0; i < 4; i++) {
        bool found = false;
        for(int j = 0; j < 4; j++) {
            if(guess[j] == mastermindCode[i] && i != j) {
                found = true;
                break;
            }
        }
        if(!found) {
            count++;
        }
    }
    return count;
}

int main() {
    string mastermindCode, guess;
    cout << "Enter the Mastermind code: ";
    cin >> mastermindCode;
    cout << "Enter the guess: ";
    cin >> guess;
    int black = blackPegs(mastermindCode, guess);
    int white = 4 - black;
    cout << white << "\n" << black << endl;
    return 0;
}