#include <queue>
#include <string>

bool solveBoolean(std::string s) {
    std::queue<bool> queue;
    int parentheses = 0; 
    for (char c : s) {
        if (c == '(') {
            queue.push(false);
            parentheses++;
        }
        else if (c == ')') {
            while(parentheses > 0) {
                bool top = queue.front();
                queue.pop();
                if (c == ')') queue.push(top);
                else queue.push(!top);
                parentheses--;
            }
        }
        else if (c == '|') queue.push(queue.front() || queue.pop());
        else if (c == '&') queue.push(queue.front() && queue.pop());
        else if (c == 'T' || c == 'F') queue.push(c == 'T');
    }
    return queue.front();