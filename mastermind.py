def mastermind(code, guess):
    code = list(code)
    guess = list(guess)
    white = sum(c in g for c, g in zip(code, guess)) - sum(
        code[i] == guess[i] for i in range(4)
    )
    black = sum(code[i] == guess[i] for i in range(4))
    return str(black), str(white)