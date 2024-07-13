int main() {
    string cipher, mapping, message;
    cin >> cipher >> mapping >> message;

    for (char &c : message) {
        int index = cipher.find(c);
        if (index != string::npos) {
            c = mapping[index];
        }
    }

    cout << message << endl;

    return 0;
}