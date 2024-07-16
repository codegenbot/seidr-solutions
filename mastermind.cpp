int main() {
    string code, guess;
    cin >> code >> guess;
    
    int white = 0, black = 0;
    map<char, int> m;
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
            m[code[i]]--;
        } else {
            m[code[i]]++;
            m[guess[i]]--;
        }
    }
    
    for (auto& it : m) {
        white += max(it.second, 0);
    }
    
    cout << white << "\n" << black;
    return 0;
}