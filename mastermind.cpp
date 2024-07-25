int main() {
    string code, guess;
    cin >> code >> guess;
    int black_pegs = 0, white_pegs = 0;
    map<char, int> code_map, guess_map;
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++black_pegs;
        } else {
            code_map[code[i]]++;
            guess_map[guess[i]]++;
        }
    }
    
    for (auto& kvp : code_map) {
        white_pegs += min(kvp.second, guess_map[kvp.first]);
    }
    
    cout << white_pegs << endl;
    cout << black_pegs << endl;
    
    return 0;
}