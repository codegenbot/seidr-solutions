int main() {
    string code, guess;
    cin >> code >> guess;
    
    int black_pegs = 0, white_pegs = 0;
    map<char, int> code_count, guess_count;
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black_pegs++;
        } else {
            code_count[code[i]]++;
            guess_count[guess[i]]++;
        }
    }
    
    for (auto it = code_count.begin(); it != code_count.end(); ++it) {
        white_pegs += min(it->second, guess_count[it->first]);
    }
    
    cout << white_pegs << endl << black_pegs << endl;
    
    return 0;
}