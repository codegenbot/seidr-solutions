def mastermind(code, guess):
    black_pegs = sum(1 for c1, c2 in zip(code, guess) if c1 == c2)
    code_counts = {c: code.count(c) for c in set(code)}
    white_pegs = sum(1 for c in set(guess) if c in code and code_counts[c] > 0)
    return str(black_pegs) + "\n" + str(white_pegs - black_pegs)