def mastermind(code, guess):
    code_counts = {c: code.count(c) for c in set(code)}
    guess_counts = {c: guess.count(c) for c in set(guess)}

    white = 0
    black = 0
    for c1, c2 in zip(code, guess):
        if c1 == c2:
            black += 1
        elif code_counts[c1] > 0 and code_counts[c1] > guess_counts[c1]:
            white += 1

    return str(white), str(black)