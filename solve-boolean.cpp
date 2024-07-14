#include <vector>
#include <iostream>
#include <string>

using namespace std;

bool solveBoolean(string expression) {
    if (expression == "t" || expression == "T") return true;
    if (expression == "f" || expression == "F") return false;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            int left = 0, right = i+1;
            while (left < i && isalpha(expression[left])) left++;
            while (right <= i && isalpha(expression[right])) right++;
            string leftStr = expression.substr(left, i-left);
            string rightStr = expression.substr(i+1, right-i-1);

            if ((solveBoolean(leftStr) && solveBoolean(rightStr))) return true;
            else return false;

        }
        else if (expression[i] == '|') {
            int left = 0, right = i+1;
            while (left < i && isalpha(expression[left])) left++;
            while (right <= i && isalpha(expression[right])) right++;
            string leftStr = expression.substr(left, i-left);
            string rightStr = expression.substr(i+1, right-i-1);

            if ((solveBoolean(leftStr) || solveBoolean(rightStr))) return true;
            else return false;
        }
    }

    return false;
}

int main() {
    string expression;
    cin >> expression;

    cout << (solveBoolean(expression) ? "True" : "False") << endl;

    return 0;
}