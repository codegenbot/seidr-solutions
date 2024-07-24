int main() {
    string cipher1, cipher2, encrypted;
    cin >> cipher1 >> cipher2 >> encrypted;
    
    for (char &c : encrypted) {
        if (c == cipher1[0])
            c = cipher2[0];
        else if (c == cipher2[0])
            c = cipher1[0];
    }
    
    cout << encrypted << endl;
    
    return 0;
}