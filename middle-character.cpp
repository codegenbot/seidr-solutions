int main() {
    string s;
    cin >> s;
    
    int n = s.length();
    
    if (n % 2 == 1) {
        cout << s.substr(n/2, 1);
    } else {
        cout << s.substr(n/2 - 1, 2);
    }
    
    return 0;
}