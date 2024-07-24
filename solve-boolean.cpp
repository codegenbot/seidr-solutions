bool solveBoolean(string boolExp) {
    stack<char> operators;
    stack<bool> operands;

    for (int i = 0; i < boolExp.length(); i++) {
        if (boolExp[i] == 'T' || boolExp[i] == 't')
            operands.push(true);
        else if (boolExp[i] == 'F' || boolExp[i] == 'f')
            operands.push(false);

        else if (boolExp[i] == '&' && operators.empty())
            operators.push('&');
        else if (boolExp[i] == '|' && operators.empty())
            operators.push('|');

        else {
            while (!operators.empty()) {
                char op = operators.top();
                operators.pop();

                bool rightOp = operands.top();
                operands.pop();

                bool leftOp;
                if (!operators.empty())
                    leftOp = operands.top();
                else
                    leftOp = rightOp;

                operands.push(evalBoolean(leftOp, rightOp, op));
            }
        }
    }

    return operands.top();
}

bool evalBoolean(bool left, bool right, char op) {
    switch (op) {
        case '&':
            return left && right;
        case '|':
            return left || right;
    }
}