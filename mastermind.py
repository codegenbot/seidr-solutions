def mastermind(code, guess):
    white = 0
    black = 0
    code_dict = {char: count for char, count in collections.Counter(code).items()}
    
    for i, c in enumerate(code):
        if c == guess[i]:
            black += 1
        elif code_dict.get(c, 0) > 0:
            white += 1
            code_dict[c] -= 1
    
    for c in guess:
        if code_dict.get(c, 0) > 0:
            white += 1
            code_dict[c] -= 1
            
    return str(black) + "\n" + str(white)