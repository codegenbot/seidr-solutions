#include <iostream>
#include <string>

bool boolEvaluate(const std::string& expression, int& pos) {
    if (pos >= expression.size()) return false;

    bool result = true;
    while (pos < expression.size() && expression[pos] != '&' && expression[pos] != '|') {
        if (expression[pos] == 't') {
            result = true;
            pos++; 
            while (pos < expression.size() && expression[pos] != '&' && expression[pos] != '|') {
                if (expression[pos] == 'f') {
                    result = false;
                    break; 
                }
                pos++;
            } 
        }
        else if (expression[pos] == 'f') {
            result = false;
            while (pos < expression.size() && expression[pos] != '&' && expression[pos] != '|') {
                if (expression[pos] == 't') {
                    return true; 
                }
                pos++;
            } 
        }
    }

    if (expression[pos] == '&') {
        result = boolEvaluate(expression, ++pos) && result;
    } else if (expression[pos] == '|') {
        return boolEvaluate(expression, ++pos) || result;
    }

    return result; 
}

int main() {
    int testCases;
    std::cin >> testCases;

    for (int i = 0; i < testCases; ++i) {
        std::string expression;
        std::cin >> expression;
        int pos = 0; 

        if (!boolEvaluate(expression, pos)) { 
            std::cout << "False" << std::endl;
        }
        else {
            std::cout << "True" << std::endl;
        }
    }

    return 0;
}