int main() {
    string code, guess;
    cin >> code >> guess;
    int white = 0, black = 0;
    map<char, int> code_count, guess_count;
  
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++black;
        } else {
            ++code_count[code[i]];
            ++guess_count[guess[i]];
        }
    }
  
    for (auto& p : code_count) {
        white += min(p.second, guess_count[p.first]);
    }
  
    cout << white << endl << black << endl;
  
    return 0;
}