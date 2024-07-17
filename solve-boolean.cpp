string solveBoolean(string input) {
    stack<char> s;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == '&') {
            char a = s.top(); s.pop();
            char b = s.top(); s.pop();
            s.push((a == 'T' && b == 'T') ? 'T' : 'F');
        } else if (input[i] == '|') {
            char a = s.top(); s.pop();
            char b = s.top(); s.pop();
            s.push((a == 'T' || b == 'T') ? 'T' : 'F');
        } else {
            s.push(input[i]);
        }
    }
    return (s.top() == 'T') ? "True" : "False";
}