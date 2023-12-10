def mastermind(code, guess):
    import collections

    black_pegs = 0
    white_pegs = 0
    code_counts = collections.Counter(code)
    guess_counts = collections.Counter(guess)
    
    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
    
    for color, count in guess_counts.items():
        white_pegs += min(count, code_counts[color])
    
    white_pegs -= black_pegs
    
    return white_pegs, black_pegs