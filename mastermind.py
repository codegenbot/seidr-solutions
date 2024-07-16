def mastermind(code, guess):
    black = 0
    for c1, c2 in zip(code, guess):
        if c1 == c2:
            black += 1
            guess = guess.replace(c1, 'z', 1)
            code = code.replace(c1, 'z', 1)
    white = sum(1 for c in set(guess) if c in code and c != 'z')
    return str(len(set(guess) - {c: i+1 for c, i in zip(code, guess)})), str(black)