int main() {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    
    for (char c : s3) {
        cout << s2[s1.find(c)];
    }
    
    return 0;
}