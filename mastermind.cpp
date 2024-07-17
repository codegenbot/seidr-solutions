int whitePegs(int code[6], int guess[4]) {
    int count = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (code[j] == (guess[i] / 100000) + ((guess[i] % 10000) / 1000) * 6 + ((guess[i] % 1000) / 100) * 36 + ((guess[i] % 100) / 10) * 216 + (guess[i] % 10) * 1296)
                count++;
        }
    }
    return count;
}

int blackPegs(int code[6], int guess[4]) {
    int count = 0;
    for (int i = 0; i < 4; i++) {
        if ((guess[i] / 100000) == code[(guess[i] % 10000) / 1000] && (guess[i] % 1000) == (guess[i] % 100) * 10)
            count++;
    }
    return count;
}

int main() {
    int code[6];
    int guess[4];
    
    // Read the Mastermind code and a guess from standard input
    for(int i = 0; i < 6; ++i){
        cin >> code[i];
    }
    for(int i = 0; i < 4; ++i){
        cin >> guess[i];
    }

    // Calculate and print the number of white pegs
    cout << whitePegs(code, guess) << endl;

    // Calculate and print the number of black pegs
    cout << blackPegs(code, guess) << endl;

    return 0;
}