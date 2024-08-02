#include <string>
using namespace std;

bool evaluateBoolean(string expression) {
    stack<char> opStack;
    char op;
    int x, y;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '(') {
            opStack.push(expression[i]);
        }
        else if (expression[i] == ')') {
            while (!opStack.empty() && opStack.top() != '(')
                op = opStack.top(), opStack.pop();
            if (!opStack.empty()) opStack.pop();
        } 
        else if ((expression[i] >= 'A' && expression[i] <= 'Z') || (expression[i] >= 'a' && expression[i] <= 'z')) {
            if (i < expression.length() - 1) {
                if (expression[i+1] == '|') return true;
                if (expression[i+1] == '&') return false;
            }
        } 
        else if (expression[i] == '|' || expression[i] == '&') {
            op = expression[i];
            while (!opStack.empty() && opStack.top() != '(')
                op = opStack.top(), opStack.pop();
            if (op == '(') opStack.pop();
        }
    }

    return false;
}

int main()
{
    string input;
    cout << "Enter Boolean expression: ";
    getline(cin, input);
    bool result = evaluateBoolean(input);
    if(result)
        cout << "True";
    else
        cout << "False";

    return 0;
}