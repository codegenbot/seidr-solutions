def mastermind(code, guess):
    code = list(code)
    guess = list(guess)
    white = sum(c in code for c in guess) - len(
        [i for i, x in enumerate(guess) if code[i] == x]
    )
    black = sum(1 for i in range(4) if code[i] == guess[i])
    return str(white), str(black)