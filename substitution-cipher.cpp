int main() {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    
    for (char& c : s3) {
        int idx = s1.find(c);
        if (idx != string::npos) {
            c = s2[idx];
        }
    }
    
    cout << s3 << endl;
    
    return 0;
}