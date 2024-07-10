```
def mastermind(code, guess):
    code_counts = {c: code.count(c) for c in set(code)}
    guess_counts = {c: guess.count(c) for c in set(guess)}

    white = 0
    black = 0
    for i, c in enumerate(code):
        if c == guess[i]:
            black += 1
        elif guess_counts.get(c, 0) > 0:
            white += 1
            guess_counts[c] -= 1

    return str(white), str(black)