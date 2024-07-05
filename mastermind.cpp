int whitePegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            count++;
        }
    }
    return count;
}

int blackPegs(string code, string guess) {
    int correctPosition = 0;
    int matchingColors = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            correctPosition++;
            matchingColors--;
        } else if (count(guess.begin(), guess.end(), code[i]) > 0) {
            matchingColors++;
        }
    }

    return correctPosition;
}

int main() {
    string code;
    cout << "Enter the Mastermind code: ";
    cin >> code;

    string guess;
    cout << "Enter your guess: ";
    cin >> guess;

    int white = whitePegs(code, guess);
    int black = blackPegs(code, guess);

    cout << black << endl;
    cout << white << endl;

    return 0;
}