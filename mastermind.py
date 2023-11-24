def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0
    
    code_count = collections.Counter(code)
    guess_count = collections.Counter(guess)
    
    for i in range(len(code)):
        if code[i] == guess[i]:
            black_pegs += 1
            code_count[code[i]] -= 1
            guess_count[guess[i]] -= 1
    
    for color in code_count:
        white_pegs += min(code_count[color], guess_count[color])
        
    return white_pegs, black_pegs