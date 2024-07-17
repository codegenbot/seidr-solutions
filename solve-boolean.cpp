Here is the solution:

string solveBoolean(string expression) {
    stack<char> operators;
    stack<bool> values;

    for (char c : expression) {
        if (c == 't' || c == 'T') {
            values.push(true);
        } else if (c == 'f' || c == 'F') {
            values.push(false);
        } else if (c == '&') {
            bool right = values.top(); values.pop();
            bool left = values.top(); values.pop();

            values.push(left && right);
        } else if (c == '|') {
            bool right = values.top(); values.pop();
            bool left = values.top(); values.pop();

            values.push(left || right);
        }
    }

    return values.top() ? "True" : "False";
}