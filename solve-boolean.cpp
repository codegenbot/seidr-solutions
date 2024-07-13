int evalBoolean(const string& expression) {
    if (expression == "t") {
        return true;
    }
    if (expression == "f") {
        return false;
    }
    
    bool result = false;
    if (expression.find('&') != string::npos) {
        size_t pos = expression.find('&');
        string left = expression.substr(0, pos);
        string right = expression.substr(pos + 1);
        result = evalBoolean(left) && evalBoolean(right);
    } else if (expression.find('|') != string::npos) {
        size_t pos = expression.find('|');
        string left = expression.substr(0, pos);
        string right = expression.substr(pos + 1);
        result = evalBoolean(left) || evalBoolean(right);
    }
    
    return result;
}

int main() {
    string input;
    cin >> input;
    cout << (evalBoolean(input) ? "True" : "False") << endl;
    return 0;
}