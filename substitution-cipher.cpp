int main() {
    string cipher1, cipher2, message;
    cin >> cipher1 >> cipher2 >> message;

    for (char c : message) {
        int idx = cipher1.find(c);
        if (idx != string::npos) {
            cout << cipher2[idx];
        } else {
            cout << c;
        }
    }

    return 0;
}