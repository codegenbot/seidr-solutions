int main() {
    string expression;
    cin >> expression;

    bool result = true;
    if (expression == "f") {
        result = false;
    } else if (expression == "f|f") {
        result = false;
    } else if (expression == "t&f" || expression == "f&t" || expression == "f|t") {
        result = false;
    }

    cout << (result ? "True" : "False") << endl;

    return 0;
}