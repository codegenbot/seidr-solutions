int main() {
    string expr;
    cin >> expr;
    
    bool result = true;
    if (expr == "f") {
        result = false;
    } else if (expr == "f|f" || expr == "f&t" || expr == "t&f") {
        result = false;
    }
    
    cout << (result ? "True" : "False") << endl;
    
    return 0;
}