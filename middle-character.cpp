int main() {
    string input;
    cin >> input;
    
    if (input.length() % 2 == 1) {
        cout << input[input.length() / 2];
    } else {
        cout << input.substr(input.length() / 2 - 1, 2);
    }
    
    return 0;
}