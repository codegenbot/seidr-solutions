```c++
#include <stack>
#include <string>
#include <cctype>
#include <utility>

bool solveBoolean(std::string expression) {
    std::stack<char> st;
    for (char c : expression) {
        if (std::isalpha(c)) {
            st.push(c);
        } else if (c == '|') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            st.push(c);
        } else if (c == '&') {
            while (!st.empty() && st.top() == '|') {
                st.pop();
            }
            st.push(c);
        }
    }
    return !st.empty();
}

int main() {
    std::string input;
    std::cout << "Enter a Boolean expression (T/F/|/&): ";
    std::getline(std::cin, input);
    bool result = solveBoolean(input);
    if (result)
        std::cout << "True";
    else
        std::cout << "False";
    return 0;
}