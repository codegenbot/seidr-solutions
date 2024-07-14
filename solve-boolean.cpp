#include <stack>
#include <string>
#include <iostream>

bool evaluateTop(std::stack<char> &st) {
    std::stack<char> resStack; // Declare resStack here
    bool orResult = true;
    bool andResult = false;

    while (!st.empty()) {
        char c = st.top();
        st.pop();

        if (c == '(') {
            // push '(' to resStack
            resStack.push(c);
        } else if (c == ')') {
            // pop ')' and '(' from resStack until '(' is found
            while (!resStack.empty() && resStack.top() != '(') {
                processOperand(resStack, orResult, andResult);

                if (!orResult && c == '|') {
                    orResult = true;
                }
                else if (!andResult && c == '&') {
                    andResult = false;
                }

                resStack.pop();
            }
            // pop '(' from resStack
            resStack.pop();

        } else if (c == 'T' || c == 'F') {
            processOperand(st, orResult, andResult);
        } else if (c == '|') {
            // reset orResult for OR operation
            orResult = true;
            while (!st.empty() && st.top() != '(') {
                st.pop();
            }
            if (!st.empty()) {
                c = st.top();
                st.pop();
                // process Operand and reset orResult
                if (c == 'T') orResult = true; else orResult = false;
            }

        } else if (c == '&') {
            // reset andResult for AND operation
            andResult = true;
            while (!st.empty() && st.top() != '(') {
                st.pop();
            }
            if (!st.empty()) {
                c = st.top();
                st.pop();
                // process Operand and reset andResult
                if (c == 'T') andResult = true; else andResult = false;
            }

        }
    }
    return orResult;
}

void processOperand(std::stack<char> &st, bool &orResult, bool &andResult) {
    char c = st.top();
    st.pop();
    if (c == 'T') orResult = true; else orResult = false;

}