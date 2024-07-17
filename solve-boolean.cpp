#include <string>
using namespace std;

bool solveBoolean(string expression) {
    if(expression == "T") return true;
    if(expression == "F") return false;
    
    bool result = true;
    int i = 0;
    while(i < expression.size()) {
        if(expression[i] == '&') {
            int j = i + 1;
            while(j < expression.size() && expression[j] != '|') j++;
            string subexpr = expression.substr(i + 1, j - i - 1);
            result &= solveBoolean(subexpr);
            i = j;
        } else if(expression[i] == '|') {
            int j = i + 1;
            while(j < expression.size() && (expression[j] == '&' || expression[j] == '|')) j++;
            string subexpr2 = expression.substr(i, j - i);
            result |= solveBoolean(subexpr2) ? true : false;
            i = j;
        } else {
            i++;
        }
    }
    
    return result;
}