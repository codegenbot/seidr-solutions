def mastermind(code, guess):
    white_pegs = sum(c in guess for c in set(guess))
    black_pegs = sum(1 for c in range(len(code)) if code[c] == guess[c])
    return str(4 - black_pegs) + "\n" + str(black_pegs)