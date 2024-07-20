int whitePegs(string code, string guess) {
    int count = 0;
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            count++;
        }
    }
    return 4 - count;
}

int blackPegs(string code, string guess) {
    int count = 0;
    map<char,int> codeCount, guessCount;
    for(int i=0; i<4; i++) {
        codeCount[code[i]]++;
        guessCount[guess[i]]++;
    }
    for(auto it: codeCount) {
        if(it.second == 1 && guessCount.find(it.first) != guessCount.end()) {
            count++;
        }
    }
    return count;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << whitePegs(code, guess) << endl;
    cout << blackPegs(code, guess) << endl;
    return 0;
}