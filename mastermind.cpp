```
int main() {
    string code, guess;
    int whitePegs = 0, blackPegs = 0;
    cin >> code >> guess;
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            for (int j = 0; j < 4; j++) {
                if (code[j] == guess[i] && code[j] != guess[j]) {
                    whitePegs++;
                    break;
                }
            }
        }
    }
    cout << whitePegs << " " << blackPegs << endl;
    return 0;
}
```
This code checks if the guessed character is in the correct position (black peg) and also checks if it's a different color than the corresponding character in the code (white peg). If both conditions are true, then it increments the whitePegs counter.