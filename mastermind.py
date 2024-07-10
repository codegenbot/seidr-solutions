def mastermind(code, guess):
    white = sum(1 for c in set(guess) if guess.count(c) == 1 and c in code)
    black = sum(int(c1 == c2) for (c1, _), (_, c2) in zip(code, guess))
    return str(white), str(black)