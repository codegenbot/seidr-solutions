def mastermind(code, guess):
    black = 0
    white = 0
    code_count = collections.Counter(code)
    guess_count = collections.Counter(guess)
    
    for i in range(len(code)):
        if code[i] == guess[i]:
            black += 1
            code_count[code[i]] -= 1
            guess_count[guess[i]] -= 1
    
    for color, count in code_count.items():
        if count > 0 and guess_count[color] > 0:
            white += min(count, guess_count[color])
    
    return white, black