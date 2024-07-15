from collections import Counter


def mastermind(code, guess):
    black = sum(1 for c1, c2 in zip(guess, code) if c1 == c2)
    white = (
        sum(1 for c, count in Counter(guess).items() if 1 < count and c in code) - black
    )
    return str(black) + "\n" + str(white)