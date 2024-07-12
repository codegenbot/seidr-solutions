int main() {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    for (char c : s3) {
        for (int i = 0; i < s1.size(); ++i) {
            if (s1[i] == c) {
                cout << s2[i];
                break;
            }
        }
    }
    return 0;
}