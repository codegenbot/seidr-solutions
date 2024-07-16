def mastermind(code, guess):
    black_count = sum([1 for c, g in zip(code, guess) if c == g])
    
    char_counts = {char: (code.count(char), guess.count(char)) for char in set(code)}
    
    white_count = 0
    correct_color_wrong_place = 0
    
    for char, (code_char_count, guess_char_count) in char_counts.items():
        if code_char_count > 0 and guess_char_count > 0:
            white_count += min(code_char_count, guess_char_count) - black_count
            black_count = max(0, black_count)
            
    return str(black_count), str(white_count)