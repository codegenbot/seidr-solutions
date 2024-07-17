```cpp
#include <string>

bool solveBoolean(string expression) {
    bool result = true;
    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == '&') {
            int j = i + 1;
            while (j < expression.size() && expression[j] != '|') j++;
            string subexpr = expression.substr(i + 1, j - i - 1);
            result &= solveBoolean(subexpr);
            i = j;
        }
    }
    if(expression == "t") return true;
    else if(expression == "f") return false;
    else {
        bool a = (expression[0] == 't');
        for(int i=1; i<expression.size(); i++){
            if(expression[i] == '|'){
                break;
            }else{
                a ^= (expression[i] == 't');
            }
        }
        return a;
    }
}