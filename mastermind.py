def mastermind(code, guess):
    black_pegs = sum(1 for c in range(len(code)) if code[c] == guess[c])
    white_pegs = 0
    for c in set(guess):
        white_pegs += min(code.count(c), guess.count(c))
    return str(black_pegs) + "\n" + str(4 - black_pegs - white_pegs)