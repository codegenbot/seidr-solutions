```
def mastermind(code, guess):
    white = sum(c1 == c2 for c1, c2 in zip(guess, code))
    freq_code = {k: v.count(k) for k in set(k for k in code)}
    freq_guess = {k: v.count(k) for k in set(k for k in guess)}
    black = sum(1 for c, g in zip(code, guess) if c == g)
    return str(white), str(black)