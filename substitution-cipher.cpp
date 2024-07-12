int main() {
    string cipher1, cipher2, message;
    cin >> cipher1 >> cipher2 >> message;
    
    string decipheredMessage = message;
    for (int i = 0; i < message.size(); ++i) {
        for (int j = 0; j < cipher1.size(); ++j) {
            if (message[i] == cipher1[j]) {
                decipheredMessage[i] = cipher2[j];
                break;
            }
        }
    }
    
    cout << decipheredMessage << endl;
    
    return 0;
}