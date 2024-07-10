for (auto it = unmatchedCode.begin(); it != unmatchedCode.end(); ) {
    auto codeCount = count(code.begin(), code.end(), *it);
    auto guessCount = count(guess.begin(), guess.end(), *it);
    
    if (codeCount > 0) {
        whitePegs += min(codeCount, guessCount);
        it = unmatchedCode.erase(it);
    } else {
        ++it;
    }
}