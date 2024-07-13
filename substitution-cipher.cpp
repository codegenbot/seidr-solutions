int main() {
    string cipher1, cipher2, input;
    cin >> cipher1 >> cipher2 >> input;
    
    for (char &c : input) {
        if (c == cipher1[0]) {
            c = cipher2[0];
        } else if (c == cipher2[0]) {
            c = cipher1[0];
        }
    }
    
    cout << input << endl;
    
    return 0;
}