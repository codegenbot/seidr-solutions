int main() {
    string input;
    cin >> input;
    int len = input.size();
    if (len % 2 == 0) {
        cout << input.substr(len/2 - 1, 2);
    } else {
        cout << input.substr(len/2, 1);
    }
    return 0;
}