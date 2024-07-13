int main() {
    string a, b, c;
    cin >> a >> b >> c;
    for (char &ch : c) {
        for (int i = 0; i < a.size(); ++i) {
            if (c == a) {
                c = b;
                break;
            } else if (c == b) {
                c = a;
                break;
            }
        }
    }
    cout << c << endl;
    return 0;
}