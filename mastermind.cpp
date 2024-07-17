int getHint(string s, string p) {
    int white = 0;
    int black = 0;
    vector<char> ss(s.begin(), s.end());
    for (char c : p) {
        if (c == ss[0]) {
            black++;
            ss.erase(ss.begin());
        }
    }
    for (char c : p) {
        if (count(ss.begin(), ss.end(), c)) {
            white++;
            ss.erase(remove(ss.begin(), ss.end(), c), ss.end());
        }
    }
    return to_string(white) + " " + to_string(black);
}