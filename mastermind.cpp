int whitePegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] != guess[i]) {
            count++;
        }
    }
    return count;
}

int blackPegs(string code, string guess) {
    int count = 0;
    vector<int> freq(6, 0);
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            count++;
        } else {
            freq[code[i] - 'A']++;
            freq[guess[i] - 'A']--;
        }
    }
    for (int i = 0; i < 6; ++i) {
        if (freq[i] > 0) {
            count += freq[i];
        }
    }
    return count;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    
    int white = whitePegs(code, guess);
    int black = blackPegs(code, guess);
    
    cout << white << endl;
    cout << black << endl;
    
    return 0;
}