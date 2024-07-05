int whitePegs(string code, string guess) {
    int count = 0;
    map<char, int> codeMap;

    for (int i = 0; i < code.size(); ++i) {
        if (code[i] == guess[i]) {
            return -1;
        }
        codeMap[code[i]]++;
    }

    for (int i = 0; i < code.size(); ++i) {
        if (codeMap[guess[i]] > 0) {
            count++;
            --codeMap[guess[i]];
        }
    }

    return count;
}

int blackPegs(string code, string guess) {
    int count = 0;
    map<char, int> codeMap;

    for (int i = 0; i < code.size(); ++i) {
        if (code[i] == guess[i]) {
            count++;
        }
        codeMap[code[i]]++;
    }

    return count;
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
    if (white == -1) {
        cout << "0" << endl;
    } else {
        cout << white << endl;
    }

    return 0;
}