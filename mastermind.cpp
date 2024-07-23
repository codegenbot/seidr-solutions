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
        if(countOf(codeVector, guess[i]) > 0) {
            count++;
            replaceElement(codeVector, guess[i]);
        }
    }
    return count;
}

int countOf(vector<char> &vec, char ch) {
    int count = 0;
    for(int i=0; i<vec.size(); i++) {
        if(vec[i] == ch) {
            count++;
        }
    }
    return count;
}

void replaceElement(vector<char> &vec, char ch) {
    for(int i=0; i<vec.size(); i++) {
        if(vec[i] == ch) {
            vec[i] = 'X';
            break;
        }
    }
}