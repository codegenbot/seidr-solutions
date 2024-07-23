using namespace std;

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
            codeVector.erase(remove(codeVector.begin(), codeVector.end(), guess[i]), codeVector.end());
        }
    }
    return count;
}

int countOf(std::vector<char> &vec, char ch) {
    return vec.count(ch);
}