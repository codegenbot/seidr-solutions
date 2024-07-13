```
def mastermind(code, guess):
    code_counts = {c: code.count(c) for c in set(code)}
    guess_counts = {g: guess.count(g) for g in set(guess)}

    black = sum(1 for c, g in zip(code, guess) if c == g)
    white = sum((code_counts.get(c, 0) and min(0, code_counts.get(c, 0) - guess_counts.get(c, 0))), 
                (guess_counts.get(g, 0) and min(0, guess_counts.get(g, 0) - code_counts.get(g, 0))) for c in set(code))

    return str(black), str(white)