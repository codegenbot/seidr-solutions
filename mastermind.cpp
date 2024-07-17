int whitePegs(string code, string guess) {
    int count = 0;
    for(int i = 0; i < 4; i++) {
        if(code[i] == guess[i]) {
            count++;
        }
    }
    return count;
}

int blackPegs(string code, string guess) {
    int count = 0;
    map<char, int> codeCount;
    for(int i = 0; i < 4; i++) {
        codeCount[code[i]]++;
    }

    for(int i = 0; i < 4; i++) {
        if(code[i] == guess[i]) {
            codeCount[code[i]]--;
        }
    }

    for(auto it : codeCount) {
        count += it.second;
    }

    return 4 - count;
}

int main() {
    string code, guess;
    cout << "Enter the Mastermind code: ";
    cin >> code;
    cout << "Enter the guess: ";
    cin >> guess;
    int black = blackPegs(code, guess);
    int white = whitePegs(code, guess);
    cout << "Black pegs: " << black << endl;
    cout << "White pegs: " << white << endl;
    return 0;
}