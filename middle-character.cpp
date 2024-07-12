int main() {
    string str;
    cin >> str;

    int len = str.length();
    
    if (len % 2 == 1) {
        cout << str.substr(len / 2, 1);
    } else {
        cout << str.substr(len / 2 - 1, 2);
    }

    return 0;
}