int main() {
    string code, guess;
    cin >> code >> guess;
    
    int blackPegs = 0, whitePegs = 0;
    vector<int> count(6, 0);
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++blackPegs;
        } else {
            ++count[code[i] - 'A'];
            ++count[guess[i] - 'A'];
        }
    }
    
    for (int i = 0; i < 6; ++i) {
        whitePegs += min(count[i], 2);
    }
    
    whitePegs -= blackPegs;
    
    cout << whitePegs << endl << blackPegs << endl;
    
    return 0;
}