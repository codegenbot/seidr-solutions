def mastermind(code, guess):
    black_pegs = sum(1 for i in range(4) if code[i] == guess[i])
    white_pegs = len(set(guess)) - black_pegs

    return str(black_pegs) + "\n" + str(white_pegs)