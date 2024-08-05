bool solveBoolean(std::string expression) {
    bool result = true;
    for(int i=0; i<expression.length(); i++){
        if(expression[i] == '|') {
            result = true;
        } else if(expression[i] == '&') {
            result &= (expression[i+1] == 'T');
        } else if(expression[i] != 'T' && expression[i] != 'F'){
            return false;
        }
    }
    return result;
}