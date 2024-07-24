int main() {
    string code, guess;
    cin >> code >> guess;
    
    int white = 0, black = 0;
    vector<int> freq(6, 0);
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        } else {
            freq[code[i]-'A']++;
            freq[guess[i]-'A']--;
        }
    }
    
    for (int f : freq) {
        if (f > 0) {
            white += f;
        }
    }
    
    white = max(white, 0);
    
    cout << white << endl;
    cout << black << endl;
    
    return 0;
}