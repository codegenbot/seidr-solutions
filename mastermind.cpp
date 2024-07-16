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
    int correctCount = 0;
    vector<char> codeArray(code.begin(), code.end());
    vector<char> guessArray(guess.begin(), guess.end());

    for (int i = 0; i < 4; i++) {
        if (codeArray[i] == guessArray[i]) {
            correctCount++;
            codeArray[i] = '#';
            guessArray[i] = '#';
        }
    }

    int count = 0;
    for (int i = 0; i < 4; i++) {
        if (guessArray[i] != '#') {
            count++;
        }
    }
    return correctCount - count;
}

int main() {
    string code, guess;
    cout << "Enter the Mastermind code: ";
    cin >> code;
    cout << "Enter the Mastermind guess: ";
    cin >> guess;
    
    int blackPegsCount = blackPegs(code, guess);
    int whitePegsCount = 4 - blackPegsCount;

    cout << whitePegsCount << endl;
    cout << blackPegsCount << endl;

    return 0;
}