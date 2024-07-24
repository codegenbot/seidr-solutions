int getHint(string s, string b) {
    int white = 0;
    int black = 0;

    vector<int> sCount(6, 0);
    vector<int> bCount(6, 0);

    for (int i = 0; i < 4; i++) {
        if (s[i] == b[i]) {
            black++;
            continue;
        }
        sCount[s[i] - 'A']++;
        bCount[b[i] - 'A']++;
    }

    for (int i = 0; i < 6; i++) {
        white += min(sCount[i], bCount[i]);
    }

    return to_string(white) + "\n" + to_string(black);
}