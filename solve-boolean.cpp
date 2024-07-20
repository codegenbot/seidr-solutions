#include <string>
using namespace std;

bool solveBoolean(string input) {
    stack<char> ops;
    stack<bool> values;

    for(int i = 0; i < input.length(); i++) {
        if(input[i] == 't') {
            values.push(true);
        } else if(input[i] == 'f') {
            values.push(false);
        } else if(input[i] == '|') {
            while(values.size() > 1) {
                bool b = values.top();
                values.pop();
                bool a = values.top();
                values.pop();
                values.push(a || b);
            }
        } else if(input[i] == '&') {
            while(values.size() > 1) {
                bool b = values.top();
                values.pop();
                bool a = values.top();
                values.pop();
                values.push(a && b);
            }
        }
    }

    return values.top();
}