int whitePegs(int code[], int guess[]) {
    int count = 0;
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            count++;
        }
    }
    return count;
}

int blackPegs(int code[], int guess[]) {
    int count = 0;
    for (int i = 0; i < 4; i++) {
        if (guess[i] == code[0] || guess[i] == code[1] || 
            guess[i] == code[2] || guess[i] == code[3]) {
            count++;
        }
    }
    return count - whitePegs(code, guess);
}

int main() {
    int code[4], guess[4];
    for (int i = 0; i < 4; i++) {
        cin >> code[i];
        cin >> guess[i];
    }
    cout << blackPegs(code, guess) << endl;
    cout << whitePegs(code, guess) << endl;
    return 0;
}