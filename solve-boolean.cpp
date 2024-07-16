```
using namespace std;

bool evaluateBooleanExpression(string expression) {
    stack<char> operation;
    string temp = "";
    
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!operation.empty() && operation.top() == '|') {
                operation.pop();
            }
            if (!temp.empty()) {
                if (temp == "T") temp = "True";
                else if (temp == "F") temp = "False";
                operation.push(temp);
                temp = "";
            } else if (!operation.empty()) {
                temp = to_string(operation.top());
                operation.pop();
            }
        } else if (expression[i] == '|') {
            while (!operation.empty() && (operation.top() == '&' || operation.top() == '|')) {
                operation.pop();
            }
            if (!temp.empty()) {
                if (temp == "T") temp = "True";
                else if (temp == "F") temp = "False";
                operation.push(temp);
                temp = "";
            } else if (!operation.empty()) {
                temp = to_string(operation.top());
                operation.pop();
            }
        } else if (expression[i] != 'T' && expression[i] != 'F') {
            temp += expression[i];
        }
    }
    
    while (!operation.empty()) {
        if (temp.empty()) {
            temp = to_string(operation.top());
            operation.pop();
        } else {
            if (temp == "T") temp = "True";
            else if (temp == "F") temp = "False";
            string op = to_string(operation.top());
            operation.pop();
            if (op == "T" && temp == "True") temp = "True";
            else if (op == "F" && temp == "True") temp = "False";
            else if (op == "T" && temp == "False") temp = "False";
            else if (op == "F" && temp == "False") temp = "False";
            else if (op == "&" && temp == "True" && operation.top() == "T") temp = "True";
            else if (op == "&" && temp == "True" && operation.top() == "F") temp = "False";
            else if (op == "&" && temp == "False" && operation.top() == "T") temp = "False";
            else if (op == "&" && temp == "False" && operation.top() == "F") temp = "False";
            else if (op == "|" && temp == "True" && operation.top() == "T") temp = "True";
            else if (op == "|" && temp == "True" && operation.top() == "F") temp = "True";
            else if (op == "|" && temp == "False" && operation.top() == "T") temp = "True";
            else if (op == "|" && temp == "False" && operation.top() == "F") temp = "False";
        }
    }
    
    return temp == "True";
}