def mastermind(code, guess):
    white = sum(1 for c in code if c in guess and code.count(c) > guess.count(c))
    black = sum(1 for i in range(len(guess)) if code[i] == guess[i])
    return str(black), str(white)