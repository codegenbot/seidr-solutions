#include <iostream>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '|') {
            int firstBracketIndex = expression.find('&', 0);
            int secondBracketIndex = expression.find('&', firstBracketIndex + 1);

            string firstPart = expression.substr(0, firstBracketIndex);
            string secondPart = expression.substr(firstBracketIndex + 1, secondBracketIndex - firstBracketIndex - 1);
            string thirdPart = expression.substr(secondBracketIndex + 1);

            if ((firstPart == "T" && (secondPart == "T" || secondPart == "F")) ||
                (firstPart == "F" && (secondPart == "T" || secondPart == "F"))) {
                return true;
            } else {
                return false;
            }
        }
    }
    if (expression == "T") {
        return true;
    } else if (expression == "F") {
        return false;
    }

    int firstBracketIndex = expression.find('&');
    int secondBracketIndex = expression.find('&', firstBracketIndex + 1);

    string firstPart = expression.substr(0, firstBracketIndex);
    string secondPart = expression.substr(firstBracketIndex + 1, secondBracketIndex - firstBracketIndex - 1);
    string thirdPart = expression.substr(secondBracketIndex + 1);

    if ((firstPart == "T" && (secondPart == "T" || secondPart == "F")) ||
        (firstPart == "F" && (secondPart == "T" || secondPart == "F"))) {
        return true;
    } else {
        return false;
    }
}

int main() {
    string expression;
    cin >> expression;
    cout << evaluateBooleanExpression(expression);
    return 0;
}