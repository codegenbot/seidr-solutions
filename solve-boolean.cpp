#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool evaluateBooleanExpression(const string& input) {
    stack<char> st;
    for(char c : input) {
        if (c == '|') {
            char operand1 = st.top(); st.pop();
            char operand2 = st.top(); st.pop();
            if (operand1 == 't' || operand2 == 't') {
                st.push('t');
            } else {
                st.push('f');
            }
        } else if (c == '&') {
            char operand1 = st.top(); st.pop();
            char operand2 = st.top(); st.pop();
            if (operand1 == 't' && operand2 == 't') {
                st.push('t');
            } else {
                st.push('f');
            }
        } else {
            st.push(c);
        }
    }
    return (st.top() == 't');
}

int main() {
    string input;
    cin >> input;
    
    bool result = evaluateBooleanExpression(input);
    
    if (result) {
       cout << "True" << "\n";
    } else {
        cout << "False" << "\n";
    }
    
    return 0;
}