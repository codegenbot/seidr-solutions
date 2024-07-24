int main() {
    string cipher1, cipher2, message;
    cin >> cipher1 >> cipher2 >> message;
    
    string deciphered_message = "";
    for (char c : message) {
        size_t idx = cipher1.find(c);
        if (idx != string::npos) {
            deciphered_message += cipher2[idx];
        }
    }
    
    cout << deciphered_message << endl;
    
    return 0;
}