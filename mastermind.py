def mastermind(code, guess):
    black_pegs = sum(1 for i in range(4) if code[i] == guess[i])
    white_pegs = 0
    color_counts = {}
    for c in set(guess):
        color_counts[c] = min((guess.count(c), code.count(c)))
    
    for c, count in color_counts.items():
        if count > 1:
            white_pegs += count - 1

    return str(black_pegs) + "\n" + str(white_pegs)