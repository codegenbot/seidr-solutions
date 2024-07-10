#include <string>
using namespace std;

bool solveBoolean(string input) {
    stack<char> s;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == '&') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
            if (s.empty()) return false;
        } else if (input[i] == '|') {
            while (!s.empty() && s.top() == '|') {
                s.pop();
            }
            if (s.empty()) return true;
        } else {
            s.push(input[i]);
        }
    }
    while (!s.empty()) {
        if (s.top() == '&') return false;
        if (s.top() == '|') return true;
        s.pop();
    }
    return s.size() > 0;
}

int main() {
    string input;
    cout << "Enter a Boolean expression: ";
    cin >> input;
    bool result = solveBoolean(input);
    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}