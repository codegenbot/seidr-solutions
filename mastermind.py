def mastermind(code, guess):
    white = sum([1 for i in range(4) if code[i] in guess and code[i] != guess[i]])
    black = sum([1 for i in range(4) if code[i] == guess[i]])
    return str(black), str(white)