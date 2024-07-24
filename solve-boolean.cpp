bool solveBoolean(string expression) {
    int pos = 0;
    while (pos != string::npos) {
        if (expression[pos] == '|') {
            string left;
            string right;

            if (pos > 0 && expression[pos - 1] == '|')
                left = "";
            else
                left = expression.substr(0, pos);

            if (pos < expression.length() - 1 && expression[pos + 1] == '|')
                right = "";
            else
                right = expression.substr(pos + 1);

            if (solveBoolean(left) || solveBoolean(right))
                return true;
        } else if (expression[pos] == '&') {
            string left;
            string right;

            if (pos > 0 && expression[pos - 1] == '&')
                left = "";
            else
                left = expression.substr(0, pos);

            if (pos < expression.length() - 1 && expression[pos + 1] == '&')
                right = "";
            else
                right = expression.substr(pos + 1);

            if (solveBoolean(left) && solveBoolean(right))
                return true;
        }

        pos = expression.find((expression[pos] == '|') ? "|" : "&", pos + 1);
    }

    return tolower(expression[0]) == 't';
}

int main() {
    string expression;
    cout << "Enter a Boolean expression: ";
    getline(cin, expression);
    bool result = solveBoolean(expression);
    if (result)
        cout << "True";
    else
        cout << "False";
    return 0;
}