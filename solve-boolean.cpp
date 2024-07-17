string solveBoolean(string boolExp) {
    stack<char> opStack;
    stack<string> valStack;

    for (int i = 0; i < boolExp.length(); i++) {
        if (boolExp[i] == '&' || boolExp[i] == '|') {
            while (!opStack.empty() && opStack.top() != '(') {
                valStack.push(valStack.top());
                opStack.pop();
            }
            opStack.push(boolExp[i]);
        } else if (boolExp[i] == '(') {
            opStack.push('(');
        } else if (boolExp[i] == ')') {
            while (!opStack.empty() && opStack.top() != '&') {
                valStack.push(valStack.top());
                opStack.pop();
            }
            opStack.pop();
        } else {
            string temp = "";
            while (i + 1 < boolExp.length() && boolExp[i + 1] != '&' && boolExp[i + 1] != '|') {
                temp += boolExp[i++];
            }
            valStack.push(temp);
        }
    }

    while (!opStack.empty()) {
        string op = opStack.top();
        opStack.pop();
        string b1 = valStack.top();
        valStack.pop();
        string b2;
        if (op == '&') {
            if (b1 == "t" && b2 == "t") return "True";
            else if (b1 == "f" || b2 == "f") return "False";
            else return "False";
        } else {
            if (b1 == "t" && b2 == "t") return "True";
            else if (b1 == "f" || b2 == "f") return "False";
            else return "True";
        }
    }

    return valStack.top();
}