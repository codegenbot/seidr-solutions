def mastermind(code, guess):
    black = sum(1 for a, b in zip(guess, code) if a == b)
    white = sum(1 for x in code if guess.count(x) > 0 and x != code[code.index(x)])
    return str(black) + "\n" + str(min(max(0, white), 4))