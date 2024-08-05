```c++
bool solveBoolean(std::string expression) {
    int i = 0;
    while(i < expression.length()) {
        if(expression[i] == '&') {
            i++;
            if(i >= expression.length() || expression[i] != '&')
                return false;
            i++;
        } else if(expression[i] == '|') {
            i++;
            if(i >= expression.length() || expression[i] != '|')
                return true;
            i++;
        } else if(expression[i] == 'T' || expression[i] == 'F') {
            int j = i + 1;
            while(j < expression.length() && (expression[j] == '&' || expression[j] == '|')) {
                if(expression[j] == '&')
                    return false;
                if(expression[j] == '|')
                    return true;
                j++;
            }
            return expression[i] == 'T';
        } else {
            i++;
        }
    }
    return true;
}