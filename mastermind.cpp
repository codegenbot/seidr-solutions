int blackPegs(string code, string guess) {
    int blackCount = 0;
    vector<char> codeArray(code.begin(), code.end());
    for (char c : guess) {
        int matches = count(codeArray.begin(), codeArray.end(), c);
        if (matches > 0) {
            blackCount++;
            codeArray.erase(remove(codeArray.begin(), codeArray.end(), c), codeArray.end());
        }
    }
    return blackCount;
}