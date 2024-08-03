def mastermind(code, guess):
    count_black = sum(c1 == c2 for c1, c2 in zip(code, guess))
    count_white = sum(
        min(c1.count(c), c2.count(c)) for c in set(guess) if code.count(c)
    )
    return str(count_black) + "\n" + str(4 - count_black)