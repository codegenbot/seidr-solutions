int main() {
    string cipher1, cipher2, encrypted;
    cin >> cipher1 >> cipher2 >> encrypted;
    string decrypted = encrypted;
    
    for (int i = 0; i < encrypted.length(); ++i) {
        for (int j = 0; j < cipher1.length(); ++j) {
            if (encrypted[i] == cipher1[j]) {
                decrypted[i] = cipher2[j];
                break;
            }
        }
    }

    cout << decrypted << endl;

    return 0;
}