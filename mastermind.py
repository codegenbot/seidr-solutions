```
def mastermind(code, guess):
    black_count = sum([c == g for c, g in zip(code, guess)])

    white_count = 0
    for c, g in zip(code, guess):
        if c != g:
            white_count += min(code.count(c), guess.count(g)) - (black_count if c == g else 0)

    return black_count, white_count