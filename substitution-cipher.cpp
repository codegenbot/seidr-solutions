int main() {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    
    for (char &c : s3) {
        for (int i = 0; i < s1.size(); ++i) {
            if (s1[i] == c) {
                c = s2[i];
                break;
            }
        }
    }
    
    cout << s3 << endl;
    
    return 0;
}