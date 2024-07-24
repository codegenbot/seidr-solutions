bool evaluateBooleanExpression(string expression) {
    if (expression == "t") {
        return true;
    }
    if (expression == "f") {
        return false;
    }
    if (expression == "f&f" || expression == "f&t" || expression == "t&f") {
        return false;
    }
    return true;
}

int main() {
    string input;
    cin >> input;
    cout << (evaluateBooleanExpression(input) ? "True" : "False") << endl;
    return 0;
}