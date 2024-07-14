#include <vector>
#include <iostream>
#include <string>

using namespace std;

bool solveBoolean(string booleanExpression) {
    stack<char> st;
    for (int i = 0; i < booleanExpression.length(); i++) {
        if (booleanExpression[i] == '&') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            if (!st.empty() && st.top() == '|') {
                return false;
            }
            st.push('&');
        } else if (booleanExpression[i] == '|') {
            while (!st.empty()) {
                st.pop();
            }
            st.push('|');
        } else {
            st.push(booleanExpression[i]);
        }
    }

    return st.top() == 'T';
}

int main() {
    // Test cases
    cout << boolalpha;
    cout << solveBoolean("t") << endl;  // True
    cout << solveBoolean("f") << endl;  // False
    cout << solveBoolean("f&f") << endl; // False
    cout << solveBoolean("f&t") << endl; // False
    cout << solveBoolean("t&f") << endl; // False

    return 0;
}