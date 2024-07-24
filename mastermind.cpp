int main() {
    string code, guess;
    cin >> code >> guess;
    
    int white = 0, black = 0;
    vector<int> count(6, 0);
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++black;
        } else {
            count[code[i] - 'A']++;
            count[guess[i] - 'A']--;
        }
    }
    
    for (int i = 0; i < 6; ++i) {
        if (count[i] > 0) {
            white += count[i];
        }
    }
    
    white = max(white, 0);
    
    cout << white << "\n" << black << "\n";
    
    return 0;
}