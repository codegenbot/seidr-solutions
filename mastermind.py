def mastermind(code, guess):
    black_count = sum([c == g for c, g in zip(code, guess)])
    
    white_count = 0
    char_counts = {}
    for char in set(guess):
        char_counts[char] = min(code.count(char), guess.count(char))
        
    for char, count in char_counts.items():
        if count > 0 and code.count(char) < count:
            white_count += count - code.count(char)
    
    return black_count, white_count