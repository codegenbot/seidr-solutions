int whitePegs(string code, string guess) {
    int count = 0;
    map<char, int> codeMap;

    for(int i=0; i<4; i++) {
        codeChar = code.substr(i,1);
        guessChar = guess.substr(i,1);

        if(code.find(guessChar) != string::npos && codeChar != guessChar) {
            count++;
        }
    }

    return count;
}