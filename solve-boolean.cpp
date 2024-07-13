bool evaluateBooleanExpression(string expression) {
    bool result = true;
    int i = 0;

    while (i < expression.length()) {
        if (expression[i] == '&') {
            i++;
            bool b1 = false, b2 = false;

            // Consume the '&' and pop two values from stack
            while ((expression[i] != '&') && (i < expression.length())) {
                i++;
            }
            i--; // Backtrack to previous position

            if (!result) return false; // Short circuit AND

            b1 = values.top();
            values.pop();
            b2 = values.top();
            values.pop();

        } else if (expression[i] == '|') {
            i++;
            bool b1 = true, b2 = true;

            // Consume the '|' and pop two values from stack
            while ((expression[i] != '|') && (i < expression.length())) {
                i++;
            }
            i--; // Backtrack to previous position

            if (!b1) return false; // Short circuit OR

            b2 = values.top();
            values.pop();
            b1 = values.top();
            values.pop();

        } else if (expression[i] == 'T' || expression[i] == 't') {
            values.push(true);

        } else if (expression[i] == 'F' || expression[i] == 'f') {
            values.push(false);
        }
    }

    return result;
}