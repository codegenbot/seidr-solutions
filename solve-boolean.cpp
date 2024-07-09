#include <string>
using namespace std;

bool solveBoolean(string s) {
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            while (!st.empty() && st.top() == '&') {
                st.pop();
            }
            if (st.empty()) {
                return false;
            }
        } else if (s[i] == '|') {
            while (!st.empty() && st.top() == '|') {
                st.pop();
            }
            if (st.empty()) {
                return true;
            }
        } else {
            st.push(s[i]);
        }
    }
    if (st.size() > 0) {
        return st.top() == 'T';
    }
    return false;
}

int main() {
    // Test cases
    cout << boolalpha << solveBoolean("t") << endl;  // True
    cout << boolalpha << solveBoolean("f") << endl;  // False
    cout << boolalpha << solveBoolean("f&f") << endl;  // False
    cout << boolalpha << solveBoolean("f&t") << endl;  // False
    cout << boolalpha << solveBoolean("t&f") << endl;  // False

    return 0;
}