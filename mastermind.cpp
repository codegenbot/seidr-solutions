int countBlackPegs(string code, string guess) {
    int blackPegs = 0;
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            blackPegs++;
        }
    }
    return blackPegs;
}

int countWhitePegs(string code, string guess) {
    int whitePegs = 0;
    vector<char> codeArray(code.begin(), code.end());
    for(int i=0; i<4; i++) {
        bool found = false;
        for(int j=0; j<4; j++) {
            if(codeArray[j] == guess[i]) {
                codeArray[j] = 'x'; // mark as visited
                found = true;
                break;
            }
        }
        if(found) whitePegs++;
    }
    return whitePegs;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    int blackPegs = countBlackPegs(code, guess);
    int whitePegs = countWhitePegs(code, guess);
    cout << whitePegs << endl;
    cout << blackPegs << endl;
    return 0;
}