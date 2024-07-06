#include <string>
#include <stack>
#include <iostream>
using namespace std;

bool solveBoolean(string expression) {
    stack<char> st;
    bool lastVal = true;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!st.empty() && (st.top() == '&' || st.top() == '|')) {
                st.pop();
            }
            lastVal &= (st.empty());
        } 
        else if (expression[i] == '|') {
            while (!st.empty() && (st.top() == '&' || st.top() == '|')) {
                st.pop();
            }
            lastVal = (st.empty());
        } 
        else if (expression[i] != 'T' && expression[i] != 'F') {
            continue;
        }
        else {
            st.push(expression[i]);
        }
    }
    return lastVal;
}

int main() {
    cout << boolalpha << solveBoolean("t") << endl;  // True
    cout << boolalpha << solveBoolean("f") << endl;  // False
    cout << boolalpha << solveBoolean("f&f") << endl;  // False
    cout << boolalpha << solveBoolean("f&t") << endl;  // False
    cout << boolalpha << solveBoolean("t&f") << endl;  // False