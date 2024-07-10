string solveBoolean(string boolExp) {
    stack<char> opStack;
    stack<string> valStack;

    for (int i = 0; i < boolExp.length(); i++) {
        if (boolExp[i] == '&' || boolExp[i] == '|') {
            while (!opStack.empty() && opStack.top() != '&')
                valStack.push(string(1, opStack.top()));
            opStack.pop();
            string left = valStack.top(); valStack.pop();
            string right = "";
            i++;
            for (; i < boolExp.length() && boolExp[i] != '&' && boolExp[i] != '|'; i++)
                right += boolExp[i];
            if (opStack.empty())
                valStack.push(left + right);
            else {
                opStack.push('&');
                valStack.push(left + right);
            }
        } else if (boolExp[i] == 'T' || boolExp[i] == 'F') {
            string s = string(1, boolExp[i]);
            while (!opStack.empty() && opStack.top() != '&' && opStack.top() != '|')
                valStack.push(string(1, opStack.top()));
            opStack.pop();
            if (valStack.size() > 0)
                valStack.push(s);
        }
    }

    return valStack.top() == "T" ? "True" : "False";
}