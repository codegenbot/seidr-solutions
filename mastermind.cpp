int whitePegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            count++;
        }
    }
    return count;
}

int blackPegs(string code, string guess) {
    int codeCount[6] = {0};
    int guessCount[6] = {0};
    
    for (int i = 0; i < 4; i++) {
        if (code[i] == 'G') codeCount[0]++;
        else if (code[i] == 'O') codeCount[1]++;
        else if (code[i] == 'B') codeCount[2]++;
        else if (code[i] == 'Y') codeCount[3]++;
        else if (code[i] == 'W') codeCount[4]++;
    }
    
    for (int i = 0; i < 4; i++) {
        if (guess[i] == 'G') guessCount[0]++;
        else if (guess[i] == 'O') guessCount[1]++;
        else if (guess[i] == 'B') guessCount[2]++;
        else if (guess[i] == 'Y') guessCount[3]++;
        else if (guess[i] == 'W') guessCount[4]++;
    }
    
    int blackPegs = 0;
    for (int i = 0; i < 6; i++) {
        if (codeCount[i] > 0 && guessCount[i] > codeCount[i]) {
            blackPegs += codeCount[i];
            break;
        }
    }
    
    return blackPegs;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    int white = whitePegs(code, guess);
    int black = blackPegs(code, guess);
    cout << white << endl << black << endl;
    return 0;
}