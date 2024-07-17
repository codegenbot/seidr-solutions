def mastermind(code, guess):
    white_pegs = sum(c in code for c in guess) - sum(
        code[i] == guess[i] for i in range(4)
    )
    black_pegs = sum(code[i] == guess[i] for i in range(4))
    return str(black_pegs) + "\n" + str(white_pegs)