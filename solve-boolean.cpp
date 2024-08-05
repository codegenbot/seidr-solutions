bool solveBoolean(std::string expression) {
    bool result = true;
    for(int i=0; i<expression.length(); i++){
        if(expression[i] == '&') {
            result &= (i > 0 && (expression[i-1] == 'T' || expression[i-1] == '(')) ? true : false;
        } else if(expression[i] == '|') {
            result |= (i > 0 && (expression[i-1] == 'F' || expression[i-1] == '(')) ? false : true;
        } else if(expression[i] != 'T' && expression[i] != 'F'){
            if(expression[i] == '&')
                result &= (result);
            else
                result |= (!result);
        }
    }
    return result;
}