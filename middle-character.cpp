int main() {
    string str;
    cin >> str;
    
    int n = str.length();
    
    if (n % 2 == 0) {
        cout << str.substr((n-1)/2, 2);
    } else {
        cout << str.at(n/2);
    }
    
    return 0;
}