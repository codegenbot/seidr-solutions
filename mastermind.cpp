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
    map<char, int> codeMap;
    for(int i=0; i<4; i++) {
        codeMap[code[i]]++;
    }

    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            codeMap[code[i]]--;
        }
    }

    for(auto pair : codeMap) {
        count += pair.second;
    }

    return 4 - count;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << whitePegs(code, guess) << endl;
    cout << blackPegs(code, guess) << endl;
    return 0;
}