int main() {
    string s, t, u;
    cin >> s >> t >> u;
    
    for (char &c : u) {
        for (size_t i = 0; i < s.size(); ++i) {
            if (u[i] == s[i]) {
                c = t[i];
                break;
            }
        }
    }
    
    cout << u;
    
    return 0;
}