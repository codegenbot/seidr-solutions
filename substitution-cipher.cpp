int main() {
    string a, b, s;
    cin >> a >> b >> s;
    
    for (char &c : s) {
        for (int i = 0; i < a.size(); ++i) {
            if (c == a[i]) {
                c = b[i];
                break;
            }
        }
    }
    
    cout << s << endl;
    
    return 0;
}