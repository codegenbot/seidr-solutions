def mastermind(code, guess):
    blacks = sum(1 for c, g in zip(code, guess) if c == g)
    code_counts = {c: code.count(c) for c in set(code)}
    whites = sum(1 for c, g in zip(code, guess) if c != g and code_counts.get(c, 0))
    return str(blacks) + ' ' + str(whites)