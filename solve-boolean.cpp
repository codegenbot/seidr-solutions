#include <iostream>
#include <string>

bool boolEvaluate(const std::string& expression, int& pos) {
    if (pos >= expression.size()) return false; // If the end of the string is reached, return False

    bool result = true;
    while (pos < expression.size() && expression[pos] != '&' && expression[pos] != '|') {
        if (expression[pos] == 't') {
            result = true;
            pos++; // Move to the next character
            while (pos < expression.size() && expression[pos] != '&' && expression[pos] != '|') {
                if (expression[pos] == 'f') {
                    result = false;
                    break; // Exit loop once 'f' is found
                }
                pos++;
            } // end of the inner loop
        }
        else if (expression[pos] == 'f') {
            result = false;
            while (pos < expression.size() && expression[pos] != '&' && expression[pos] != '|') {
                if (expression[pos] == 't') {
                    return true; // Exit function as soon as we find 't'
                }
                pos++;
            } // end of the inner loop
        }
    }

    if (expression[pos] == '&') {
        result = boolEvaluate(expression, ++pos) && result;
    } else if (expression[pos] == '|') {
        return boolEvaluate(expression, ++pos) || result;
    }

    return result; // Return the final Boolean value
}

int main() {
    int testCases;
    std::cin >> testCases;

    for (int i = 0; i < testCases; ++i) {
        std::string expression;
        std::cin >> expression;
        int pos = 0; // Initialize position in the expression

        if (!boolEvaluate(expression, pos)) { // Call the recursive function
            std::cout << "False" << std::endl;
        }
        else {
            std::cout << "True" << std::endl;
        }
    }

    return 0;
}