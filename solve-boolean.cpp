```c++
bool solveBoolean(std::string expression) {
    bool result = true;
    for(int i=0; i<expression.length(); i++){
        if(expression[i] == '&') {
            result &= true;
        } else if(expression[i] == '|') {
            result |= true;
        } else{
            if(expression[i] == 'T')
                result = true;
            else
                result = false;
        }
    }
    return result;
}