int main() {
    string secret, guess;
    cin >> secret >> guess;
    
    int black = 0, white = 0;
    vector<int> cnt_s(6, 0), cnt_g(6, 0);
    
    for(int i = 0; i < 4; ++i) {
        if(secret[i] == guess[i]) black++;
        else {
            cnt_s[secret[i]-'A']++;
            cnt_g[guess[i]-'A']++;
        }
    }
    
    for(int i = 0; i < 6; ++i) white += min(cnt_s[i], cnt_g[i]);
    
    cout << white << endl << black << endl;
    
    return 0;
}