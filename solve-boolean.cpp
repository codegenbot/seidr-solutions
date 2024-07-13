int main() {
    string expression;
    cin >> expression;
    
    bool result = true;
    if (expression == "f") {
        result = false;
    } else if (expression == "f&f" || expression == "f&t" || expression == "t&f") {
        result = false;
    }
    
    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    
    return 0;
}