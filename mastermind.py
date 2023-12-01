def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0
    code_freq = collections.Counter(code)
    guess_freq = collections.Counter(guess)
    
    for i in range(len(code)):
        if code[i] == guess[i]:
            black_pegs += 1
            code_freq[code[i]] -= 1
            guess_freq[guess[i]] -= 1
    
    for color, freq in guess_freq.items():
        if freq > 0:
            white_pegs += min(freq, code_freq[color])
    
    return white_pegs, black_pegs