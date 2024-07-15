int main() {
    string cipher1, cipher2, message;
    cin >> cipher1 >> cipher2 >> message;
    
    string decrypted_message = message;
    for (int i = 0; i < message.length(); ++i) {
        for (int j = 0; j < cipher1.length(); ++j) {
            if (message[i] == cipher1[j]) {
                decrypted_message[i] = cipher2[j];
                break;
            }
        }
    }
    
    cout << decrypted_message << endl;
    
    return 0;
}