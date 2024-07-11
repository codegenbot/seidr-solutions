```cpp
string solveBoolean(string expression) {
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '&') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
            s.push('&');
        } else if (expression[i] == '|') {
            while (!s.empty()) {
                s.pop();
            }
            s.push('|');
        } else if (expression[i] == 'T' || expression[i] == 'F') {
            s.push(expression[i]);
        }
    }
    string result;
    while (!s.empty()) {
        char c = s.top(); 
        s.pop(); 
        if (c == '&') {
            int left = 0, right = 0;
            while (!s.empty() && s.top() != '|') {
                if (s.top() == 'T') {
                    right++;
                } else {
                    left++;
                }
                s.pop();
            }
            s.pop(); 
            result = (left > right) ? "True" : "False";
        } else {
            result = (c == 'F') ? "False" : "True";
        }
        result = c + " " + result;
    }
    return result;
}