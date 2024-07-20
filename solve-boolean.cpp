string solveBoolean(string s) {
    string result = "True";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '&') {
            if (result == "True" && s[i+1] != '&')
                return "False";
        } else if (s[i] == '|') {
            if (result == "False" && s[i+1] != '|')
                return "False";
        }
    }
    return result;
}