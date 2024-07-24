int main() {
    string input;
    cin >> input;
    
    int n = input.size();
    
    if (n % 2 == 0) {
        cout << input.substr(n/2-1, 2) << endl;
    } else {
        cout << input.substr(n/2, 1) << endl;
    }
    
    return 0;
}