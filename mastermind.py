def mastermind(code, guess):
    black_count = sum([c == g for c, g in zip(code, guess)])
    
    white_count = 0
    for c in set(code):
        code_c = code.count(c)
        guess_c = guess.count(c)
        if code_c > 0 and guess_c > 0:
            wrong_position = code_c - 1
            black_count += min(wrong_position, code_c) * (code_c != guess_c)
            white_count += max(0, wrong_position - min(wrong_position, code_c))
            
    return str(black_count), str(white_count)