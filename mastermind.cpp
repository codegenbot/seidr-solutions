int whitePegs(string code, string guess) {
    int count = 0;
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            count++;
        }
    }
    return count;
}

int blackPegs(string code, string guess) {
    int count = 0;
    vector<char> codeVector(code.begin(), code.end());
    for(int i=0; i<4; i++) {
        if(find(codeVector.begin(), codeVector.end(), guess[i]) != codeVector.end()) {
            codeVector.erase(remove(codeVector.begin(), codeVector.end(), guess[i]), codeVector.end());
            count++;
        }
    }
    return count;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << blackPegs(code, guess) << "\n" << whitePegs(code, guess) << "\n";
    return 0;
}