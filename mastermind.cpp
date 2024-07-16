int countBlackPegs(string code, string guess) {
    int blackPegs = 0;
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i])
            blackPegs++;
    }
    return blackPegs;
}

int countWhitePegs(string code, string guess) {
    int whitePegs = 0;
    map<char,int> codeMap;
    for(int i=0; i<4; i++) {
        codeMap[code[i]]++;
    }
    
    for(int i=0; i<4; i++) {
        if(codeMap[guess[i]] > 0) {
            whitePegs++;
            codeMap[guess[i]]--;
        }
    }
    
    return whitePegs;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << countWhitePegs(code, guess) << endl;
    cout << countBlackPegs(code, guess) << endl;
    return 0;
}