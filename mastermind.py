def mastermind(code, guess):
    black_count = sum([c == g for c, g in zip(code, guess)])
    
    white_count = 0
    for char in set(code):
        code_char_count = code.count(char)
        guess_char_count = guess.count(char)
        if code_char_count > 0 and code_char_count < guess_char_count:
            white_count += code_char_count - (char in guess[:black_peg_count])