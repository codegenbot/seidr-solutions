def mastermind(code, guess):
    black = sum(1 for c, g in zip(code, guess) if c == g)
    
    code_counts = {c: code.count(c) for c in set(code)}
    guess_counts = {g: guess.count(g) for g in set(guess)}
    
    white = 0
    for c in set(code):
        if code_counts[c] > 0 and guess_counts.get(c, 0) < code_counts[c]:
            white += min(code_counts[c], guess_counts.get(c, 0))
    
    return str(black), str(white)