int main() {
    string str;
    cin >> str;
    int len = str.length();
    if (len % 2 == 1) {
        cout << str.substr(len/2, 1) << endl;
    } else {
        cout << str.substr(len/2 - 1, 2) << endl;
    }
    return 0;
}