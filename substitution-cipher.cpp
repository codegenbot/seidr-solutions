int main() {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    for (char &c : s3) {
        for (int i = 0; i < s1.size(); ++i) {
            if (s3[i] == s1[i]) {
                c = s2[i];
                break;
            }
        }
    }

    cout << s3;

    return 0;
}