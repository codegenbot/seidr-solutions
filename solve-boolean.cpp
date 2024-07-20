std::string solveBoolean(std::string input) {
    stack<char> ops;
    stack<bool> values;

    for(int i = 0; i < input.length(); i++) {
        if(input[i] == 'T') {
            values.push(true);
        } else if(input[i] == 'F') {
            values.push(false);
        } else if(input[i] == '|') {
            while(values.size() > 1) {
                bool b = values.top();
                values.pop();
                bool a = values.top();
                values.pop();
                values.push(a || b);
            }
        } else if(input[i] == '&') {
            while(values.size() > 1) {
                bool b = values.top();
                values.pop();
                bool a = values.top();
                values.pop();
                values.push(a && b);
            }
        }
    }

    return (values.top()) ? "True" : "False";
}