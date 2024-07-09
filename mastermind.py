def mastermind(code, guess):
    white = sum(c in guess for c in set(guess) & set(code))
    code_count = {c: code.count(c) for c in set(code)}
    black = sum((c1 == c2) and (code_count[c1] > 0) for c1, c2 in zip(code, guess))
    return str(white), str(black)