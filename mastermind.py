def mastermind(code, guess):
    return sum(code[i] == guess[i] for i in range(4)) + sum(
        guess.index(code[i]) != -1 for i in range(4)
    )