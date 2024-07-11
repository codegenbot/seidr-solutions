int main() {
    string expression;
    cin >> expression;

    bool result = true;
    if (expression == "f" || expression == "F") {
        result = false;
    } else if (expression == "f&f" || expression == "F&F" || expression == "f|f" || expression == "F|F") {
        result = false;
    }

    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}