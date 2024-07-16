def mastermind(code, guess):
    black_count = sum([c == g for c, g in zip(code, guess)])
    code_counts = {c: code.count(c) for c in set(code)}
    guess_counts = {g: guess.count(g) for g in set(guess)}
    whites = sum((code_counts.get(c, 0) - 1) * (guess_counts.get(c, 0) > 0) for c in set(code))
    return str(black_count), str(whites)