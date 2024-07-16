int main() {
    string s;
    cin >> s;
    
    int n = s.size();
    
    if (n % 2 == 1) {
        cout << s[n / 2] << endl;
    } else {
        cout << s[n / 2 - 1] << s[n / 2] << endl;
    }
    
    return 0;
}