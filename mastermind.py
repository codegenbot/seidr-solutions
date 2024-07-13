def mastermind(code, guess):
    blacks = sum(c1 == c2 for c1, c2 in zip(code, guess))
    whites = 4 - blacks
    for c in set(guess):
        whites -= min(code.count(c), guess.count(c))
    return str(whites) + "\n" + str(blacks)