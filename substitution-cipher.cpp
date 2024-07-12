int main() {
    string cipher1, cipher2, message;
    cin >> cipher1 >> cipher2 >> message;
    
    string deciphered_message = message;
    for (int i = 0; i < message.length(); ++i) {
        int index = cipher1.find(message[i]);
        deciphered_message[i] = cipher2[index];
    }
    
    cout << deciphered_message << endl;

    return 0;
}