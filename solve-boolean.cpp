bool solveBoolean(std::string expression) {
    bool result = true;
    for(int i=0; i<expression.length(); i++){
        if(expression[i] == '&') {
            result &= (i > 0 && (expression[i-1] == 'T' || expression[i-1] == '&' || expression[i-1] == '('));
        } else if(expression[i] == '|') {
            result |= (i > 0 && (expression[i-1] == 'F' || expression[i-1] == '|' || expression[i-1] == '('));
        } else if(expression[i] != 'T' && expression[i] != 'F'){
            if(expression[i] == '&')
                result &= true;
            else
                result |= true;
        } else{
            return expression[i] == 'T';
        }
    }
    return result;
}