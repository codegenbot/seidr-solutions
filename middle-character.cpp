int main() {
    string input;
    cin >> input;
    
    if (input.size() % 2 == 0) {
        cout << input.substr((input.size() / 2) - 1, 2);
    } else {
        cout << input[input.size() / 2];
    }
    
    return 0;
}