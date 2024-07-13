int main() {
    string cipher1, cipher2, message;
    cin >> cipher1 >> cipher2 >> message;

    for (char ch : message) {
        int idx = cipher1.find(ch);
        if (idx != string::npos) {
            cout << cipher2[idx];
        }
    }

    return 0;
}