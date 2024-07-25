#include <string>
using namespace std;

bool solveBoolean(string expression) {
    stack<char> operation;
    for (char c : expression) {
        if (c == '&') {
            while (!operation.empty() && operation.top() == '|')
                operation.pop();
            if (!operation.empty() && operation.top() == '&')
                return false;
        } else if (c == '|') {
            while (!operation.empty())
                operation.pop();
            operation.push(c);
        } else if (c == 't' || c == 'f') {
            if (c == 'f')
                return false;
            return true;
        }
    }
    return true;
}