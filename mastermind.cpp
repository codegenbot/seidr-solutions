```c++
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
        bool found = false;
        for(char ch : codeVector) {
            if(ch == guess[i]) {
                codeVector.erase(remove(codeVector.begin(), codeVector.end(), guess[i]), codeVector.end());
                count++;
                found = true;
                break;
            }
        }
        if(!found) return 4; 
    }
    return count;
}