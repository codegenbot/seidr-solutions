int main() {
    string s1, s2, cipher;
    cin >> s1 >> s2 >> cipher;
    
    for (char c : cipher) {
        int pos = s2.find(c);
        cout << s1[pos];
    }

    return 0;
}