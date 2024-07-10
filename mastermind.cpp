else {
    if (code[i] >= 'A' && code[i] <= 'F' && guess[i] >= 'A' && guess[i] <= 'F') {
        codeFreq[code[i]]++;
        guessFreq[guess[i]]++;
        
        if (codeFreq[code[i]] <= guessFreq[guess[i]]) {
            whitePegs++;
        } else {
            blackPegs++;
        }
    }
}