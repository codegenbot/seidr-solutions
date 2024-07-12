if (c == '&' || (c == '|' && (operators.empty() || operators.top() == '&'))) {
            while (!operators.empty() && (operators.top() == '&' || operators.top() == '|')) {
                char op = operators.top();
                operators.pop();
                bool operand2 = operands.top();
                operands.pop();
                bool operand1 = operands.top();
                operands.pop();
                if (op == '&') {
                    operands.push(operand1 && operand2);
                } else {
                    operands.push(operand1 || operand2);
                }
            }
            operators.push(c);
        } else if (c == '|') {