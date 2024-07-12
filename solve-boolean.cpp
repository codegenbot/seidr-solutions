using namespace std;

bool solveBoolean(string expression) {
    stack<char> s;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
            if (s.empty()) {
                return false;
            }
        } else if (expression[i] == '|') {
            while (!s.empty() && s.top() == '|') {
                s.pop();
            }
            if (s.empty()) {
                return true;
            }
        } else {
            s.push(expression[i]);
        }
    }
    while (!s.empty()) {
        s.pop();
    }
    stack<char> temp = s;
    string result = "";
    while (!temp.empty()) {
        result += temp.top() == '&' ? 'T' : 'F';
        temp.pop();
    }
    return result[0] == 'F';