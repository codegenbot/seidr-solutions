int whitePegs(string code, string guess) {
    int count = 0;
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            count++;
        }
    }
    return 4 - count;
}

int blackPegs(string code, string guess) {
    int count = 0;
    for(int i=0; i<6; i++) {
        char c = 'A' + i;
        if(code.find(c) != string::npos && guess.find(c) != string::npos) {
            count++;
        }
    }
    return count - whitePegs(code, guess);
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << whitePegs(code, guess) << endl;
    cout << blackPegs(code, guess) << endl;
    return 0;
}