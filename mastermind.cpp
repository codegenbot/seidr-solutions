int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;
    vector<char> code_chars(code.begin(), code.end());
    for (char c : guess) {
        if (code_chars.count(c)) {
            code_chars.erase(remove(code_chars.begin(), code_chars.end(), c), code_chars.end());
            if (count(code.begin(), code.end(), c) > 0) {
                black++;
            } else {
                white++;
            }
        }
    }
    return make_pair(white, black).second;
}