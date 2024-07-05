int main() {
    string str;
    cin >> str;
    int len = str.length();
    if (len % 2 == 0) {
        cout << str.substr(len / 2 - 1, 2) << endl;
    } else {
        cout << str[len / 2] << endl;
    }
    return 0;
}