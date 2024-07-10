def mastermind(code, guess):
    black = 0
    white = 0

    for c in code:
        if c == guess[guess.index(c)]:
            black += 1
            guess = guess.replace(c, '', 1)
        elif guess.count(c) > 0:
            white += 1
            guess = guess.replace(c, '', guess.count(c))

    return str(white), str(black)