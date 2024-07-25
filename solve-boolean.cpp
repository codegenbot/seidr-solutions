bool evaluateBooleanExpression(string expression) {
    stack<char> opStack;
    stack<string> valStack;

    for (int i = 0; i < expression.length(); i++) {
        char c = expression[i];

        if (c == 'T' || c == 't')
            valStack.push("True");
        else if (c == 'F' || c == 'f')
            valStack.push("False");

        else if (c == '|') {
            string v1 = valStack.top();
            valStack.pop();
            string v2 = valStack.top();
            valStack.pop();

            valStack.push(to_string((v1 == "True" && v2 == "True") || (v1 == "False" && v2 == "False") ? "True" : "False"));
        }
        else if (c == '&') {
            string v1 = valStack.top();
            valStack.pop();
            string v2 = valStack.top();
            valStack.pop();

            valStack.push(to_string((v1 == "True" && v2 == "True") || (v1 == "False" && v2 == "False") ? "True" : "False"));
        }
    }

    return valStack.top() == "True";
}