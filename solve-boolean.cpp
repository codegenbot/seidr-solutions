```c++
#include <queue>
#include <string>

bool evaluateTop(std::queue<char>& q) {
    char c = q.front();
    q.pop();
    if (c == '&') {
        while (!q.empty() && q.front() != '|') {
            q.pop();
        }
        bool top = q.empty();
        q.push(c);
        return top;
    } else if (c == '|') {
        while (!q.empty()) {
            q.pop();
        }
        return true;
    } else {
        return false;
    }
}

bool evaluate(std::queue<char> q, std::string expression) {
    bool result = true;
    for (char c : expression) {
        if (c == 'T') {
            result = false;
            break;
        } else if (c == 'F') {
            result = false;
            break;
        } else if (c == '|') {
            q.push(c);
            result = true;
        } else if (c == '&') {
            while (!q.empty() && q.front() == '|') {
                q.pop();
            }
            if (q.empty()) {
                return false;
            }
            bool top = evaluateTop(q);
            if (top) {
                q.push('&');
            } else {
                q.push('|');
            }
        }
    }
    return result;
}

int main() {
    std::queue<char> q;
    std::string expression = "expression"; // Replace with your desired expression
    bool result = evaluate(q, expression);
    if (result) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }
    return 0;
}