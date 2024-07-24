```
```
def mastermind(code, guess):
    white_pegs = sum(min(count, 1) for count in ((code.count(c), 0)[c not in code] for c in guess))
    black_pegs = sum(1 for a, b in zip(code, guess) if a == b)
    return str(black_pegs) + "\n" + str(white_pegs)
```