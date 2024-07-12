int main() {
    string cipher1, cipher2, message;
    cin >> cipher1 >> cipher2 >> message;
    
    for (char &c : message) {
        if (c == cipher1[0]) c = cipher2[0];
        else if (c == cipher1[1]) c = cipher2[1];
        // Add more conditions as needed for longer ciphers
    }
    
    cout << message << endl;
    
    return 0;
}