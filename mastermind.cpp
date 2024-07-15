int whitePegs(std::string code, std::string guess) {
    int count = 0;
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            count++;
        }
    }
    return count;
}

int blackPegs(std::string code, std::string guess) {
    int blackCount = 0;
    std::unordered_map<char,int> codeMap;
    for(int i=0; i<4; i++) {
        codeMap[code[i]]++;
    }
    
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            codeMap[code[i]]--;
        }
    }
    
    for(int i=0; i<4; i++) {
        if(codeMap.find(guess[i]) != codeMap.end() && codeMap[guess[i]]>0) {
            blackCount++;
            codeMap[guess[i]]--;
        }
    }
    
    return blackCount;
}