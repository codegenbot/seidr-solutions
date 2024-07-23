int main() {
    string input;
    cin >> input;
    int len = input.size();
    if (len % 2 == 1) {
        cout << input.substr(len/2, 1);
    } else {
        cout << input.substr(len/2 - 1, 2);
    }
    return 0;
}