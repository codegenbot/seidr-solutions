int main() {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    for (char &c : s3) {
        int pos = s1.find(c);
        if (pos != string::npos) {
            c = s2[pos];
        }
    }

    cout << s3 << endl;

    return 0;
}