int main() {
    string code, guess;
    cin >> code >> guess;
    
    int blacks = 0, whites = 0;
    vector<int> counts(6, 0);
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blacks++;
        } else {
            counts[code[i] - 'A']++;
            counts[guess[i] - 'A']--;
        }
    }
    
    for (int count : counts) {
        if (count > 0) {
            whites += count;
        }
    }
    
    cout << whites << endl;
    cout << blacks << endl;
    
    return 0;
}