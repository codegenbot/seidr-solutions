```
def mastermind(code, guess):
    white_pegs = sum(min(code.count(c), guess.count(c)) for c in set(guess))
    black_pegs = 4 - sum(1 for i in range(4) if code[i] == guess[i])
    return str(black_pegs) + "\n" + str(white_pegs)