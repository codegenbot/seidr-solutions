int countWhitePegs(string mastermindCode, string guess) {
    int whitePegs = 0;
    for (int i = 0; i < 4; i++) {
        if (mastermindCode[i] == guess[i]) {
            whitePegs++;
        }
    }
    return whitePegs;
}

int countBlackPegs(string mastermindCode, string guess) {
    int blackPegs = 0;
    for (int i = 0; i < 4; i++) {
        bool correctColor = false;
        for (int j = 0; j < 4; j++) {
            if (mastermindCode[j] == guess[i]) {
                correctColor = true;
                break;
            }
        }
        if (correctColor) {
            blackPegs++;
            mastermindCode.erase(remove(mastermindCode.begin(), mastermindCode.end(), guess[i]), mastermindCode.end());
        }
    }
    return blackPegs;
}

int main() {
    string mastermindCode, guess;
    cin >> mastermindCode >> guess;
    cout << countWhitePegs(mastermindCode, guess) << endl;
    cout << countBlackPegs(mastermindCode, guess) << endl;
    return 0;
}