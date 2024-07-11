int main() {
    string cipher1, cipher2, message;
    cin >> cipher1 >> cipher2 >> message;

    string deciphered_message = message;

    for (int i = 0; i < message.size(); ++i) {
        if (message[i] == cipher1[i]) {
            deciphered_message[i] = cipher2[i];
        } else {
            deciphered_message[i] = cipher1[i];
        }
    }

    cout << deciphered_message << endl;

    return 0;
}