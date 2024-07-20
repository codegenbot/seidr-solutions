def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0
    code_counts = [0] * 6
    guess_counts = [0] * 6
    
    for c in code:
        code_counts[ord(c) - ord("B")] += 1

    for i, c in enumerate(guess):
        if c == code[i]:
            black_pegs += 1
        elif code_counts[ord(c) - ord("B")] > 0:
            white_pegs += 1
            code_counts[ord(c) - ord("B")] -= 1

    for i, count in enumerate(code_counts):
        if count > 0 and guess_counts[i] < count:
            white_pegs += count - guess_counts[i]
    
    return str(black_pegs), str(white_pegs)