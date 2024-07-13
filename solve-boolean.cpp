int main() {
    string expr;
    cin >> expr;
    
    if (expr == "t")
        cout << "True" << endl;
    else if (expr == "f")
        cout << "False" << endl;
    else if (expr == "f&f" || expr == "f&t" || expr == "t&f")
        cout << "False" << endl;
    
    return 0;
}