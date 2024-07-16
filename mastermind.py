def mastermind(code, guess):
    black_count = sum([c == g for c, g in zip(code, guess)])
    
    white_count = 0
    for c in set(guess):
        code_c = code.count(c)
        guess_c = guess.count(c)
        
        if code_c > 0 and code_c != guess_c:
            black_count += min(code_c, 4) * (code_c == guess_c)
            white_count += max(0, code_c - 1)
            
    return str(black_count), str(white_count)