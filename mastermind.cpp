int main() {
    string code, guess;
    cin >> code >> guess;
    
    int black = 0, white = 0;
    vector<int> count1(6, 0), count2(6, 0);
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        } else {
            count1[code[i] - 'A']++;
            count2[guess[i] - 'A']++;
        }
    }
    
    for (int i = 0; i < 6; ++i) {
        white += min(count1[i], count2[i]);
    }
    
    cout << white << endl;
    cout << black << endl;

    return 0;
}