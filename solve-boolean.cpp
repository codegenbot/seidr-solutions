string solveBoolean(string input) {
    stack<char> s;
    string output;

    for(int i = 0; i < input.length(); i++) {
        if(input[i] == '&') {
            while(!s.empty() && s.top() == '&') {
                s.pop();
            }
            s.push('&');
        } else if(input[i] == '|') {
            while(!s.empty()) {
                s.pop();
            }
            s.push('|');
        } else {
            s.push(input[i]);
        }
    }

    while(!s.empty()) {
        output += s.top();
        s.pop();
    }

    return (output == "TF") ? "False" : (output == "T|F") ? "True" : "Error";
}