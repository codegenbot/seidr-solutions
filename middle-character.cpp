int main() {
    string s;
    cin >> s;
    
    if (s.length() % 2 == 0) {
        cout << s.substr(s.length()/2 - 1, 2);
    } else {
        cout << s[s.length()/2];
    }
    
    return 0;
}