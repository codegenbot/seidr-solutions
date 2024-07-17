```cpp
#include <string>
#include <cstring>

bool solveBoolean(string expression) {
    bool result = true;
    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == '&') {
            int j = i + 1;
            int k = j;
            while (k < expression.size() && expression[k] != '|') k++;
            char subexpr[k - j + 1];
            strcpy(subexpr, &expression.substr(j, k-j).c_str());
            result &= solveBoolean(std::string(subexpr));
            i = k;
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