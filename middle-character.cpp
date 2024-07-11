int main() {
    string input;
    cin >> input;
    
    int n = input.length();
    
    if (n % 2 == 1) {
        cout << input[n/2];
    } else {
        cout << input.substr(n/2 - 1, 2);
    }
    
    return 0;
}