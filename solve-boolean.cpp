char solveBoolean(const string& expression) {
    if (expression == "t")
        return 'T';
    else if (expression == "f")
        return 'F';
    else {
        char op = expression[1];
        char val1 = expression[0];
        char val2 = expression[2];
        
        if (op == '&') {
            if (val1 == 't' && val2 == 't')
                return 'T';
            else
                return 'F';
        } else {
            if (val1 == 'f' && val2 == 'f')
                return 'F';
            else
                return 'T';
        }
    }
}

int main() {
    string expression;
    cin >> expression;
    cout << solveBoolean(expression) << endl;
    return 0;
}