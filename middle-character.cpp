int main() {
    string str;
    cin >> str;
    int length = str.length();
    if (length % 2 == 0) {
        cout << str.substr((length / 2) - 1, 2);
    } else {
        cout << str.substr(length / 2, 1);
    }
    return 0;
}