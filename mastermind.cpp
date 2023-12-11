
```
int main() {
    string code, guess;
    int whitePegs = 0, blackPegs = 0;
    cin >> code >> guess;
    for (int i = 0; i < code.size(); i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            for (int j = 0; j < code.size(); j++) {
                if (code[j] == guess[i]) {
                    whitePegs++;
                    break;
                }
            }
        }
    }
    cout << blackPegs << " " << whitePegs << endl;
    return 0;
}
```