```cpp
std::string solveBoolean(std::string expression) {
    std::string result = "True";
    bool left = false, right = false;
    
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            if (getBoolValue(left) && getBoolValue(right)) {
                result = "True";
            } else {
                result = "False";
            }
            left = right = false;
        } else if (expression[i] == '|') {
            if (getBoolValue(left) || getBoolValue(right)) {
                result = "True";
            } else {
                result = "False";
            }
            left = right = false;
        } else {
            bool value = getBoolValue(expression[i]);
            if (value) {
                left = right = true;
            } else {
                left = right = false;
            }
        }
    }
    
    return result;
}