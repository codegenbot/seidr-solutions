int getHint(string s1, string s2) {
    int white = 0;
    int black = 0;

    map<char, int> s1_count, s2_count;

    for (char c : s1) {
        s1_count[c]++;
    }
    for (char c : s2) {
        s2_count[c]++;
    }

    for (int i = 0; i < 4; i++) {
        if (s1[i] == s2[i]) {
            black++;
        } else {
            if (s1_count[s1[i]] > 0 && s2_count[s1[i]] > 0) {
                white++;
            }
        }
    }

    return to_string(black).append(" " + to_string(white));
}