#include <string>

bool solveBoolean(string expression) {
    if (expression == "T" || expression == "t") return true;
    if (expression == "F" || expression == "f") return false;

    bool res = true;
    for(int i=0; i<expression.size(); i++) {
        if(expression[i] == '&') {
            res &= evaluateBoolean(expression, i+1);
            i++;
        }
        else if(expression[i] == '|') {
            res |= evaluateBoolean(expression, i+1);
            i++;
        }
    }

    return res;
}

bool evaluateBoolean(string expression, int start) {
    bool res = true;
    for(int i=start; i<expression.size(); i++) {
        if(expression[i] == '&') {
            res &= (expression[i-1] == 'T');
            break;
        }
        else if(expression[i] == '|') {
            res |= (expression[i-1] == 'T');
            break;
        }
    }

    return res;
}

string solve(int test_case) {
    string expression;
    cin >> expression;

    bool result = solveBoolean(expression);

    if(result)
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return "";
}