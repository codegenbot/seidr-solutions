int main() {
    string str;
    cin >> str;
    
    if (str.length() % 2 == 0) {
        cout << str.substr((str.length() / 2) - 1, 2);
    } else {
        cout << str.substr(str.length() / 2, 1);
    }

    return 0;
}