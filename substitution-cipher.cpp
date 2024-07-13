int main() {
    string a, b, c;
    cin >> a >> b >> c;
    for (char &ch : c) {
        for (int i = 0; i < a.size(); ++i) {
            if (c == a[i]) {
                ch = b[i];
                break;
            }
        }
    }
    cout << c << endl;
    return 0;
}