int main() {
    string code, guess;
    cin >> code >> guess;
    
    int black = 0, white = 0;
    vector<int> c(6), g(6);
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++black;
        } else {
            ++c[code[i] - 'A'];
            ++g[guess[i] - 'A'];
        }
    }
    
    for (int i = 0; i < 6; ++i) {
        white += min(c[i], g[i]);
    }
    
    white -= black;
    
    cout << white << endl;
    cout << black << endl;
    
    return 0;
}