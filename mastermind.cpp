```cpp
int whitePegs(string code, string guess) {
    int count = 0;
    for (char c : guess) {
        if (code.find(c) != -1 && code.find(c) != code.find(guess[0])) {
            count++;
        }
    }
    return count;
}

int blackPegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < 4; i++) {
        if (guess[i] == code[i]) {
            count++;
            code.replace(i, 1, "x");
        }
    }
    return count;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    int white = whitePegs(code, guess);
    int black = blackPegs(code, guess);
    cout << black << endl;
    cout << white << endl;
    return 0;
}