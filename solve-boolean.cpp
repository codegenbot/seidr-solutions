int main() {
    string expression;
    cin >> expression;
    
    bool result = true;
    for (char c : expression) {
        if (c == 'f') {
            result = false;
        } else if (c == '&') {
            result = false;
        }
    }
    
    cout << (result ? "True" : "False") << endl;
    
    return 0;
}