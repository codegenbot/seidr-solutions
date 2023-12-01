def mastermind(code, guess):
    black = 0
    white = 0
    code_counts = collections.Counter(code)
    guess_counts = collections.Counter(guess)
    
    for i in range(len(code)):
        if code[i] == guess[i]:
            black += 1
            code_counts[code[i]] -= 1
            guess_counts[guess[i]] -= 1
    
    for color in guess_counts:
        white += min(code_counts[color], guess_counts[color])
    
    return white, black