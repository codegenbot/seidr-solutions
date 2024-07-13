bool evaluateBoolean(string exp) {
    if(exp == "t") return true;
    if(exp == "f") return false;
    int n = exp.size();
    vector<bool> dp(n, false);
    for(int i = 0; i < n; i++) {
        if(exp[i] == 't' || exp[i] == 'f') {
            dp[i] = exp[i] == 't' ? true : false;
        } else {
            if(exp[i] == '&') {
                dp[i] = dp[i-1] && dp[i+1];
            } else if(exp[i] == '|') {
                dp[i] = dp[i-1] || dp[i+1];
            }
        }
    }
    return dp[n-1];
}

int main() {
    string exp;
    cin >> exp;
    if(evaluateBoolean(exp)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}