int main() {
    string cipher1, cipher2, encoded;
    cin >> cipher1 >> cipher2 >> encoded;
    
    for (char &c : encoded) {
        if (c == cipher1[0]) {
            c = cipher2[0];
        } else if (c == cipher2[0]) {
            c = cipher1[0];
        }
    }
    
    cout << encoded << endl;
    
    return 0;
}