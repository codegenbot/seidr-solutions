```
def mastermind(code, guess):
    white_pegs = sum(c in code for c in guess if code.index(c) != i)
    black_pegs = sum(1 for i in range(4) if code[i] == guess[i])

    return str(black_pegs) + "\n" + str(white_pegs)