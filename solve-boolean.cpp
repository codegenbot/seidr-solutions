#include <string>
using namespace std;

bool solveBoolean(string expression) {
    stack<char> s;
    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == '|') {
            bool b1 = s.top() == 'T';
            s.pop();
            bool b2 = s.top() == 'T';
            s.pop();
            s.push(b1 || b2 ? 'T' : 'F');
        } else if (expression[i] == '&') {
            bool b1 = s.top() == 'T';
            s.pop();
            bool b2 = s.top() == 'T';
            s.pop();
            s.push(b1 && b2 ? 'T' : 'F');
        } else {
            s.push(expression[i] == 't' ? 'T' : 'F');
        }
    }
    return s.top() == 'T';
}