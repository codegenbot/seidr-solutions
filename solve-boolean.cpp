```cpp
#include <queue>
#include <string>
#include <iostream>

int main() {
    std::queue<char> q;
    bool result = false;

    std::string expression;
    std::cout << "Enter a Boolean expression (T/F/|/&): ";
    std::cin >> expression;

    for (char c : expression) {
        q.push(c);
    }

    result = evaluateTop(q);

    if (result)
        std::cout << "The result is TRUE." << std::endl;
    else
        std::cout << "The result is FALSE." << std::endl;

    return 0;
}

void processOperand(std::queue<char> &q, bool &orResult, bool &andResult) {
    char c = q.front();
    q.pop();
    if (c == 'T') orResult = true; else orResult = false;
}

bool evaluateTop(std::queue<char> &q) {
    bool orResult = true;
    bool andResult = false;

    while (!q.empty()) {
        char c = q.front();
        q.pop();

        if (c == '(') {
            // push '(' to queue
            q.push(c);
        } else if (c == ')') {
            // pop ')' and '(' from queue until '(' is found
            while (q.front() != '(') {
                processOperand(q, orResult, andResult);

                if (!orResult && c == '|') {
                    orResult = true;
                }
                else if (!andResult && c == '&') {
                    andResult = false;
                }

                q.pop();
            }
            // pop '(' from queue
            q.pop();

        } else if (c == 'T' || c == 'F') {
            processOperand(q, orResult, andResult);
        } else if (c == '|') {
            // reset orResult for OR operation
            orResult = true;
            while (!q.empty() && q.front() != '(') {
                q.pop();
            }
            if (!q.empty()) {
                c = q.front();
                q.pop();
                // process Operand and reset orResult
                if (c == 'T') orResult = true; else orResult = false;
            }

        } else if (c == '&') {
            // reset andResult for AND operation
            andResult = true;
            while (!q.empty() && q.front() != '(') {
                q.pop();
            }
            if (!q.empty()) {
                c = q.front();
                q.pop();
                // process Operand and reset andResult
                if (c == 'T') andResult = true; else andResult = false;
            }

        }
    }
    return orResult;
}