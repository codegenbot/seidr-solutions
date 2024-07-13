int main() {
    string expression;
    cin >> expression;
    
    if (expression == "t") {
        cout << "True" << endl;
    } else if (expression == "f") {
        cout << "False" << endl;
    } else if (expression == "f&f" || expression == "f&t" || expression == "t&f") {
        cout << "False" << endl;
    } else {
        cout << "True" << endl;
    }
    
    return 0;
}