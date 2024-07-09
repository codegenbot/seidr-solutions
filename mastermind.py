def mastermind(code, guess):
    black_pegs = sum([1 for i in range(4) if code[i] == guess[i]])
    white_pegs = 0
    for c in set(guess):
        white_pegs += min(code.count(c), guess.count(c)) - (code.count(c) if c in code[:black_pegs] else 0)
    return str(black_pegs) + "\n" + str(4 - black_pegs - white_pegs)