def mastermind(code, guess):
    black_pegs = sum(1 for i in range(4) if code[i] == guess[i])
    white_pegs = sum(min((guess.count(c), code.count(c)) - 1) for c in set(guess))

    return str(black_pegs) + "\n" + str(white_pegs)