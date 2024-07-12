int main() {
    string s;
    cin >> s;
    
    string result;
    int len = s.length();
    
    if (len % 2 == 0) {
        result = s.substr(len / 2 - 1, 2);
    } else {
        result = s.substr(len / 2, 1);
    }
    
    cout << result << endl;
    
    return 0;
}