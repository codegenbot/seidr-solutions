bool solveBoolean(string expression) {
    stack<char> op;
    stack<string> val;

    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == '&' || expression[i] == '|') {
            while (!op.empty() && op.top() != '(') {
                string operand2 = val.top();
                val.pop();
                string operand1 = val.top();
                val.pop();
                char opTop = op.top();
                op.pop();
                val.push("(" + (opTop == '&' ? (operand1 == "T" && operand2 == "T") : (operand1 == "F" || operand2 == "F")) ? "F" : "T");
            }
            if (expression[i] == '(') {
                op.push(expression[i]);
            } else {
                string operand2 = val.top();
                val.pop();
                string operand1 = val.top();
                val.pop();
                char opTop = expression[i];
                val.push("(" + (opTop == '&' ? (operand1 == "T" && operand2 == "T") : (operand1 == "F" || operand2 == "F")) ? "F" : "T");
            }
        } else {
            string s;
            while (i < expression.size() && expression[i] != ' ' && expression[i] != '&' && expression[i] != '|') {
                s += expression[i];
                i++;
            }
            i--;
            val.push(s);
        }
    }

    return val.top() == "T";
}