int main() {
    string s;
    cin >> s;
    
    int len = s.length();
    
    if (len % 2 == 1) {
        cout << s.substr(len/2, 1);
    } else {
        cout << s.substr(len/2 - 1, 2);
    }
    
    return 0;
}