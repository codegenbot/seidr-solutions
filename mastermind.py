def mastermind(code, guess):
    black_count = sum([c == g for c, g in zip(code, guess)])
    
    white_count = 0
    correct_color_wrong_place = 0
    
    char_counts = {char: (code.count(char), guess.count(char)) for char in set(code)}
    
    for char, (code_char_count, guess_char_count) in char_counts.items():
        if code_char_count > 0 and guess_char_count > 0:
            wrong_position = max(0, code_char_count - 1)
            black_count += min(wrong_position, code_char_count) * (code_char_count != guess_char_count)
            correct_color_wrong_place += max(0, wrong_position - min(wrong_position, code_char_count))
            
    return str(black_count), str(correct_color_wrong_place + white_count)