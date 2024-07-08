int whitePegs(string code, string guess) {
    int count = 0;
    for(int i = 0; i < 4; i++) {
        if(code[i] == guess[i]) {
            count++;
        }
    }
    return count;
}

int blackPegs(string code, string guess) {
    int count = 0;
    vector<char> codeCopy(code.begin(), code.end());
    for(int i = 0; i < 4; i++) {
        if(find(codeCopy.begin(), codeCopy.end(), guess[i]) != codeCopy.end()) {
            codeCopy.erase(remove(codeCopy.begin(), codeCopy.end(), guess[i]), codeCopy.end());
            count++;
        }
    }
    return count;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << blackPegs(code, guess) << endl;
    cout << whitePegs(code, guess) << endl;
    return 0;
}