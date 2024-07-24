```
def mastermind(code, guess):
    black_pegs = sum(c1 == c2 for c1, c2 in zip(code, guess))
    code_count = {c: code.count(c) for c in set(code)}
    white_pegs = sum(1 for c1, c2 in zip(code, guess) if c1 == c2 and code_count[c1] > 0)
    return str(black_pegs) + "\n" + str(white_pegs)