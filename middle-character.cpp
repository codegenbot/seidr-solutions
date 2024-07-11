int main() {
    string s;
    cin >> s;
    
    if (s.size() % 2 == 0) {
        cout << s.substr(s.size() / 2 - 1, 2);
    } else {
        cout << s.substr(s.size() / 2, 1);
    }
    
    return 0;
}