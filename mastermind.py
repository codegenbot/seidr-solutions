def mastermind(code, guess):
    code_counts = [code.count(c) for c in set(code)]
    guess_counts = [guess.count(c) for c in set(guess)]
    black_pegs = sum(min(a, b) for a, b in zip(code_counts, guess_counts))
    white_pegs = 4 - black_pegs
    return str(white_pegs) + "\n" + str(black_pegs)