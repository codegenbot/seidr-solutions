#include <string>

bool evaluateBooleanExpression(const std::string& expr) {
    int i = 0;
    return evaluateHelper(expr, i);
}

bool evaluateHelper(const std::string& expr, int& i) {
    bool result = operand(expr, i);
    
    while (i < expr.size() && (expr[i] == '&' || expr[i] == '|')) {
        char op = expr[i];
        i++;
        
        bool next_operand = operand(expr, i);
        
        if (op == '&') {
            result = result && next_operand;
        } else if (op == '|') {
            result = result || next_operand;
        }
    }
    
    return result;
}

bool operand(const std::string& expr, int& i) {
    if (expr[i] == 't') {
        i++;
        return true;
    } else if (expr[i] == 'f') {
        i++;
        return false;
    } else if (expr[i] == '&') {
        i++;
        return evaluateHelper(expr, i);
    } else if (expr[i] == '|') {
        i++;
        return evaluateHelper(expr, i);
    }
}