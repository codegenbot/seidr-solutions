#include <string>
using namespace std;

bool solveBoolean(string expression) {
    stack<char> ops;
    stack<string> values;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!values.empty() && values.top() == "F") {
                values.pop();
            }
            values.push((values.size() > 0 && values.top() == "T" ? "T" : "F"));
        } else if (expression[i] == '|') {
            while (!values.empty()) {
                values.pop();
            }
            values.push("F");
        } else if (expression[i] == 't' || expression[i] == 'T') {
            values.push("T");
        } else if (expression[i] == 'f' || expression[i] == 'F') {
            values.push("F");
        }
    }

    return values.top() == "T";
}