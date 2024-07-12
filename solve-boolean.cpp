#include <string>

using namespace std;

bool solveBoolean(string expression) {
    stack<char> s;
    bool isAnd = false;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!s.empty() && ((char)s.top() == '&')) {
                s.pop();
            }
            isAnd = true;
        } else if (expression[i] == '|') {
            while (!s.empty() && ((char)s.top() == '|')) {
                s.pop();
            }
            isAnd = false;
        } else {
            s.push(expression[i]);
        }
    }
    bool result = (isAnd ? ! : )((bool)(s.top()) ? true : false);
    return result;