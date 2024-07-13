def mastermind(code, guess):
    code_counts = {c: code.count(c) for c in set(code)}
    guess_counts = {g: guess.count(g) for g in set(guess)}

    black = sum(1 for c, g in zip(code, guess) if c == g)
    white = sum((c for c in set(code)) and min(0, code_counts.get(c, 0) - guess_counts.get(c, 0)),
                (g for g in set(guess)) and min(0, guess_counts.get(g, 0) - code_counts.get(g, 0)))

    return str(black), str(white)