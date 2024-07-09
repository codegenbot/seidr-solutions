def mastermind(code, guess):
    white = sum(1 for c in zip(code, guess) if c[0] == c[1])
    black = (
        sum(sum(1 for x in code.split(c[1])) for c in zip(code, guess) if c[0] == c[1])
        - white
    )
    return str(black) + "\n" + str(4 - black)