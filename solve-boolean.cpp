#include <queue>
#include <stack>
#include <string>

bool evaluate(std::stack<char> &st) {
    if (st.empty()) return false;
    bool top = evaluateTop(st);
    char c = st.top();
    st.pop();
    if (c == '&') {
        return top && evaluate(st);
    } else if (c == '|') {
        return top || evaluate(st);
    } else {
        return top;
    }
}

bool evaluateTop(std::stack<char> &st) {
    char c = st.top();
    st.pop();
    if (c == '&') {
        return !evaluate(st);
    } else if (c == '|') {
        while (!st.empty()) st.pop();
        return true;
    } else {
        return c == 'T';
    }
}

int main() {
    std::stack<char> st;
    std::string input;
    std::cout << "Enter a Boolean expression: ";
    std::cin >> input;

    for (char c : input) {
        if (c == 'T' || c == 'F') {
            st.push(c);
        } else if (c == '&' || c == '|') {
            while (!st.empty()) st.pop();
            st.push(c);
        }
    }

    std::cout << "Result: " << (evaluate(st) ? "True" : "False") << std::endl;

    return 0;
}