def mastermind(code, guess):
    white = sum([1 for i in range(4) if code[i] == guess[i]])
    black = sum([1 for i in range(4) if list(guess).count(code[i]) > 0])
    return str(black), str(white)