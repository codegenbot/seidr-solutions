Here is the solution:

bool solveBoolean(string expression) {
    stack<char> operators;
    stack<string> operands;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '|') {
            string op1 = operands.top();
            operands.pop();
            string op2 = operands.top();
            operands.pop();

            bool res = (op1 == "T") ? true : false;
            res |= (op2 == "T") ? true : false;

            operands.push((res) ? "T" : "F");
        } else if (expression[i] == '&') {
            string op1 = operands.top();
            operands.pop();
            string op2 = operands.top();
            operands.pop();

            bool res = (op1 == "T") ? true : false;
            res &= (op2 == "T") ? true : false;

            operands.push((res) ? "T" : "F");
        } else if (expression[i] != 'T' && expression[i] != 'F') {
            string op = "";
            while (i < expression.length() && expression[i] != '|' && expression[i] != '&') {
                op += expression[i];
                i++;
            }
            i--; // backtrack
            operands.push(op);
        }
    }

    return (operands.top() == "T") ? true : false;
}