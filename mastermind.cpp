int main() {
    string code, guess;
    cin >> code >> guess;
    
    int white = 0, black = 0;
    map<char, int> code_freq, guess_freq;
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        } else {
            code_freq[code[i]]++;
            guess_freq[guess[i]]++;
        }
    }
    
    for (auto& pair : code_freq) {
        white += min(pair.second, guess_freq[pair.first]);
    }
    
    cout << white << endl << black << endl;
    
    return 0;
}