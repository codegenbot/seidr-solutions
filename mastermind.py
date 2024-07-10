def mastermind(code, guess):
    white_pegs = sum(min(count, guess.count(c)) for count, c in zip([code.count(x) for x in "BOYYG"], [c for c in code]))
    black_pegs = sum(1 for i in range(4) if code[i] == guess[i])
    return str(black_pegs), str(white_pegs)