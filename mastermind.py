```
def mastermind(code, guess):
    white_pegs = 0
    black_pegs = 0
    for c1, c2 in zip(code, guess):
        if c1 == c2:
            black_pegs += 1
        elif c2 in code:
            white_pegs += 1
    return (white_pegs, black_pegs)
```