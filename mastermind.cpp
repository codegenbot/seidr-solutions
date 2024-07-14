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
    vector<char> codeVector(code.begin(), code.end());
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            codeVector.erase(remove(codeVector.begin(), codeVector.end(), code[i]), codeVector.end());
        }
    }
    for(int i=0; i<4; i++) {
        if(codeVector.size() && codeVector[0] == guess[i]) {
            count++;
            codeVector.erase(codeVector.begin());
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