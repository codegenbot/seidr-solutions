```cpp
#include <string>
#include <iostream>
#include <stack>
#include <sstream>

int main() {
    std::stack<char> st;
    bool result = false;

    std::stringstream expression;
    std::cout << "Enter a Boolean expression (T/F/|/&): ";
    char c;
    while ((c = getchar()) != '\n') {
        expression << c;
    }

    for (char c : expression.str()) {
        st.push(c);
    }

    result = evaluateTop(st);

    if (result)
        std::cout << "The result is TRUE." << std::endl;
    else
        std::cout << "The result is FALSE." << std::endl;

    return 0;
}

void processOperand(std::stack<char> &st, bool &orResult, bool &andResult) {
    char c = st.top();
    st.pop();
    if (c == 'T') orResult = true; else orResult = false;
}

bool evaluateTop(std::stack<char> &st) {
    bool orResult = true;
    bool andResult = false;

    while (!st.empty()) {
        char c = st.top();
        st.pop();

        if (c == '(') {
            // push '(' to stack
            st.push(c);
        } else if (c == ')') {
            // pop ')' and '(' from stack until '(' is found
            while (st.top() != '(') {
                processOperand(st, orResult, andResult);

                if (!orResult && c == '|') {
                    orResult = true;
                }
                else if (!andResult && c == '&') {
                    andResult = false;
                }

                st.pop();
            }
            // pop '(' from stack
            st.pop();

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