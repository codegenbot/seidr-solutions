```
def mastermind(code, guess):
    code_counts = {c: code.count(c) for c in set(code)}
    guess_counts = {c: guess.count(c) for c in set(guess)}

    white = 0
    black = 0
    for c in code:
        if c == guess[code.index(c)]:
            black += 1
        elif guess_counts[c] > 0:
            white += 1
            guess_counts[c] -= 1

    return str(white), str(black)