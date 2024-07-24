bool solveBoolean(string expression) {
    int pos = 0;

    while (pos < expression.size()) {
        size_t start = pos;
        if (expression[pos] == '|') {
            pos++;
            bool left = solveBoolean(string(1, expression[pos]));
            bool right = true;
            for (++pos; pos < expression.size() && expression[pos] != '&'; ++pos)
                ;
            if (pos < expression.size())
                right = solveBoolean(string(&expression[pos], 1));
            return left || right;
        } else if (expression[pos] == '&') {
            pos += 2;
            bool left = true, right = true;
            for (; pos < expression.size() && expression[pos] != '|';) {
                if (expression[pos] == 'F' || expression[pos] == 'f')
                    left = false;
                else
                    break;
                ++pos;
            }
            for (++pos; pos < expression.size() && expression[pos] != '|'; ++pos)
                ;
            if (pos < expression.size())
                right = solveBoolean(string(&expression[pos], 1));
            return left && right;
        } else {
            if (expression[start] == 'T' || expression[start] == 't')
                return true;
            else if (expression[start] == 'F' || expression[start] == 'f')
                return false;
            pos++;
        }
    }
    return true;
}

int main() {
    string expression;
    cout << "Enter a Boolean expression: ";
    cin >> expression;
    bool result = solveBoolean(expression);
    if (result)
        cout << "True";
    else
        cout << "False";
    return 0;
}