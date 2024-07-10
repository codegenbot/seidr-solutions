#include <stack>
#include <string>

bool solveBoolean(string boolExp) {
    stack<char> opStack;
    stack<string> valStack;

    for (int i = 0; i < boolExp.length(); i++) {
        if (boolExp[i] == '&' || boolExp[i] == '|') {
            while (!opStack.empty() && boolExp[i] != opStack.top()) {
                valStack.push(string(1, opStack.top()));
                opStack.pop();
            }
            opStack.push(boolExp[i]);
        } else if (boolExp[i] == 'T' || boolExp[i] == 'F') {
            string temp = "";
            while (i > 0 && (boolExp[i-1] == '&' || boolExp[i-1] == '|')) {
                i--;
            }
            for (; i > 0 && (boolExp[i-1] != '&' && boolExp[i-1] != '|'); i--) {
                temp = boolExp[i-1] + temp;
            }
            valStack.push(temp);
        }
    }

    while (!opStack.empty()) {
        string temp = "";
        if (opStack.top() == '&') {
            temp = (valStack.top() == "T" ? "T" : "F");
        } else if (opStack.top() == '|') {
            temp = (valStack.top() == "T" || valStack.top() == "F") ? "T" : "F";
        }
        valStack.push(temp);
        opStack.pop();
    }

    return valStack.top() == "T";
}