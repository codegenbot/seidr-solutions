int main() {
    string s;
    cin >> s;
    
    int n = s.length();
    
    if (n % 2 == 0) {
        string result = s.substr(n/2 - 1, 2);
        cout << result;
    } else {
        cout << s[n/2];
    }
    
    return 0;
}