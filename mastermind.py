def mastermind(code, guess):
    white = sum(1 for c1, c2 in zip(guess, code) if c1 == c2 and c1 != c2)
    black = sum(1 for i in zip(code, guess) if i[0] == i[1])
    return black, white