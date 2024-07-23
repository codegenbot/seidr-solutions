def mastermind(code, guess):
    white = 0
    black = 0
    code_count = {c: code.count(c) for c in set(code)}
    guess_count = {c: guess.count(c) for c in set(guess)}

    for i, (c1, c2) in enumerate(zip(guess, code)):
        if c1 == c2:
            black += 1
        elif c1 in code_count and code_count[c1] > 0:
            white += 1
            code_count[c1] -= 1

    return str(white), str(black)