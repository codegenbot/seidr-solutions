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
    
    code_count.subtract(guess_count)
    
    for color in code_count:
        white_pegs += max(code_count[color], 0)
    
    return int(white_pegs), int(black_pegs)