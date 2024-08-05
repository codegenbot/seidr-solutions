```c++
bool solveBoolean(std::string expression) {
    int n = expression.length();
    bool result = true;
    for (int i = 0; i < n; i++) {
        if (expression[i] == 'T')
            return true;
        else if (expression[i] == 'F')
            return false;
        else if (expression[i] == '&') {
            if (i + 1 < n && expression[i+1] == '&')
                i++;
            else if (i + 1 < n && expression[i+1] == '|')
                result = true;
            else
                result = false;
        } 
        else if (expression[i] == '|') {
            if (i + 1 < n && expression[i+1] == '|')
                i++;
            else if (i + 1 < n && expression[i+1] == '&')
                result = true;
            else
                result = false;
        }
    }
    return result;
}