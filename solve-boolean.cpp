```cpp
std::string solveBoolean(std::string input) {
    std::stack<char> s;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == '&') {
            while (!s.empty() && s.top() == '&') {
                s.pop();
            }
            s.push('&');
        } else if (input[i] == '|') {
            while (!s.empty()) {
                s.pop();
            }
            s.push('|');
        } else if (input[i] == 't' || input[i] == 'f') {
            s.push(input[i]);
        }
    }

    std::string result = "";
    while (!s.empty()) {
        result += s.top();
        s.pop();
    }

    return result == "tt" ? "True" : (result == "tf" ? "False" : result == "ft" ? "True" : result == "ff" ? "False" : "");
}