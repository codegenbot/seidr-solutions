bool solveBoolean(std::string expression) {
    bool result = true;
    for(int i=0; i<expression.length(); i++){
        if(expression[i] == '&') {
            result &= (i==0 || expression[i-1] != '|');
        } else if(expression[i] == '|') {
            result |= (i==0 || expression[i-1] != '&');
        } else if(expression[i] == 'T')
            result = true;
        else
            result = false;
    }
    return result;
}