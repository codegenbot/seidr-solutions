int main() {
    string expression;
    cin >> expression;

    bool result = true;
    if (expression == "f" || expression == "F") {
        result = false;
    }

    cout << (result ? "True" : "False") << endl;

    return 0;
}