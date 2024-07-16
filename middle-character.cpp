int main() {
    string input;
    cin >> input;
    
    int n = input.size();
    
    if (n % 2 == 0) {
        cout << input.substr(n/2 - 1, 2);
    } else {
        cout << input.substr(n/2, 1);
    }
    
    return 0;
}