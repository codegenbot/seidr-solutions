def mastermind(code, guess):
    white_pegs = sum(1 for c1, c2 in zip(code, guess) if c1 != c2 and c1 in guess)
    black_pegs = sum(1 for i in range(len(code)) if code[i] == guess[i])
    return str(black_pegs) + "\n" + str(4 - white_pegs - black_pegs)