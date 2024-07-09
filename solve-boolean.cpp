#include <string>
#include <stack>

int main() {
    std::string s = "input_string_here"; // replace with user input or test case
    std::cout << solveBoolean(s) << std::endl;
    return 0;
}

std::string solveBoolean(std::string s) {
    std::stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            if (st.empty()) return "False";
            else st.pop();
        } 
        else if (s[i] == '|') {
            while (!st.empty()) st.pop();
            st.push(s[i]);
        } 
        else {
            st.push(s[i]);
        }
    }
    return st.top() == 'T' ? "True" : "False";
}