def mastermind(code, guess):
    white_peg = 0
    black_peg = 0

    for c in code:
        if c == guess[code.index(c)]:
            black_peg += 1
        elif guess.count(c) > 0 and code.count(c) > 1:
            white_peg += 1

    return str(white_peg) + "\n" + str(black_peg)