string solveBoolean(string booleanExp) {
    stack<char> opStack;
    stack<string> valStack;

    for (int i = 0; i < booleanExp.length(); i++) {
        if (booleanExp[i] == '&') {
            while (!opStack.empty() && opStack.top() == '|') {
                opStack.pop();
                string operand2 = valStack.top();
                valStack.pop();
                string operand1 = valStack.top();
                valStack.pop();
                valStack.push((operand1 == "True" && operand2 == "True") ? "True" : "False");
            }
            opStack.push('&');
        } else if (booleanExp[i] == '|') {
            while (!opStack.empty()) {
                opStack.pop();
                string operand2 = valStack.top();
                valStack.pop();
                string operand1 = valStack.top();
                valStack.pop();
                valStack.push((operand1 == "True" || operand2 == "True") ? "True" : "False");
            }
            opStack.push('|');
        } else if (booleanExp[i] != 'T' && booleanExp[i] != 'F') {
            int j = i;
            while (booleanExp[j] != '&' && booleanExp[j] != '|' && j < booleanExp.length()) {
                j++;
            }
            string operand = booleanExp.substr(i, j - i);
            if (operand == "True") {
                valStack.push("True");
            } else {
                valStack.push("False");
            }
            i = j;
        }
    }

    while (!opStack.empty()) {
        opStack.pop();
        string operand2 = valStack.top();
        valStack.pop();
        string operand1 = valStack.top();
        valStack.pop();
        valStack.push((operand1 == "True" && operand2 == "True") ? "True" : "False");
    }

    return valStack.top();
}