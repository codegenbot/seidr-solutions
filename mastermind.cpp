int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;
    map<char, int> codeMap;

    // Count the frequency of each character in the code
    for (char c : code) {
        codeMap[c]++;
    }

    // Count the correct and incorrect positions of characters in the guess
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) { // Correct position
            black++;
            codeMap[code[i]]--;
        } else if (codeMap[guess[i]] > 0) { // Incorrect position but correct character
            white++;
            codeMap[guess[i]]--;
        }
    }

    return make_pair(white, black).second;
}