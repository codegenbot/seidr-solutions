int main() {
    string cipher1, cipher2, message;
    cin >> cipher1 >> cipher2 >> message;

    for (char &c : message) {
        if (c == cipher1[0]) {
            c = cipher2[0];
        }
    }

    cout << message << endl;

    return 0;
}