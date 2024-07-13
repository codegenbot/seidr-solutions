string solveBoolean(string s) {
    int n = s.size();
    for (int i = 0; i < n; i++) {
        if (s[i] == '&') {
            while (i + 1 < n && s[i + 1] == '&') i++;
            bool left = s[i - 1] != 'F';
            return left ? (!left) : "False";
        }
        else if (s[i] == '|') {
            while (i + 1 < n && s[i + 1] == '|') i++;
            bool left = s[i - 1] != 'F';
            return left;
        }
        else {
            s[i] == 'T' ? (void)(s.erase(i--, 1)) : void(s.erase(i, 1));
        }
    }
    return s[0] == 'T';
}