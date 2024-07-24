int main() {
    string cipher1, cipher2, message;
    cin >> cipher1 >> cipher2 >> message;
    
    for (char &ch : message) {
        if (ch == cipher1[0]) {
            ch = cipher2[0];
        } else if (ch == cipher2[0]) {
            ch = cipher1[0];
        }
    }
    
    cout << message << endl;
    
    return 0;
}