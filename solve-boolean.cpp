```cpp
bool solveBoolean(string expression) {
    bool result = true;
    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == '&') {
            int j = i + 1;
            while (j < expression.size() && expression[j] != '|') j++;
            for (auto k = i + 1; k < j; k++)
                result &= (expression[k] == 't');
            i = j - 1;
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