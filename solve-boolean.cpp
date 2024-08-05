bool evaluateBoolean(string expression) {
    bool result = false;
    stack<char> opstack;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!opstack.empty() && opstack.top() == '|') {
                opstack.pop();
            }
            if (!opstack.empty()) {
                result = false;
            } else {
                result = true;
            }
            opstack.push('&');
        } else if (expression[i] == '|') {
            while (!opstack.empty()) {
                opstack.pop();
            }
            if (opstack.empty()) {
                result = expression[i+1] != 'F';
            } else {
                bool left = false;
                if (opstack.top() == '&') {
                    left = true;
                }
                if (expression[i+1] == 'T') {
                    result = left;
                } else {
                    result = !left;
                }
                i++;
            }
        } else if (expression[i] == 'T' || expression[i] == 'F') {
            if (opstack.top() == '|') {
                opstack.pop();
            }
            result = expression[i] != 'F';
        }
    }

    return result;
}