#include <string>
using namespace std;

bool solveBoolean(string expression) {
    if(expression == "T") return true;
    if(expression == "F") return false;
    
    bool result = true;
    for(int i = 0; i < expression.size(); i++) {
        if(expression[i] == '&') {
            int j = i + 1;
            while(j < expression.size() && expression[j] != '|') j++;
            string subexpr = expression.substr(i + 1, j - i - 1);
            result &= solveBoolean(subexpr);
            i = j;
        }
    }
    
    for(int i = 0; i < expression.size(); i++) {
        if(expression[i] == '|') {
            int j = i + 1;
            while(j < expression.size() && expression[j] != ' ') j++;
            string subexpr2 = expression.substr(i + 1, j - i);
            result |= solveBoolean(subexpr2);
            i = j;
        }
    }
    
    return !result;
}