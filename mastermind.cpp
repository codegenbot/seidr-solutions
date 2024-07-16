int main() {
    string code, guess;
    cin >> code >> guess;
    
    int white = 0, black = 0;
    vector<int> count(6, 0);
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++black;
        } else {
            ++count[code[i] - 'A'];
        }
    }
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] != guess[i] && count[guess[i] - 'A'] > 0) {
            ++white;
            --count[guess[i] - 'A'];
        }
    }
    
    cout << white << endl;
    cout << black << endl;
    
    return 0;
}